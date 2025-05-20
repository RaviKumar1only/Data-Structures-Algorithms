#include<iostream>
using namespace std;

int main() {
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int first =0;
    for(int i=0; i<3; i++){
        first += arr[i][i];
    }

    int second =0, i=0, j=4-1;
    while(j>=0){
        second += arr[i][j];
        i++;
        j--;
    }

    cout<<first<<endl<<second;
    return 0;
}