#include<iostream>
using namespace std;

int main() {
    int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            arr1[i][j] = arr1[i][j] + arr2[i][j];
            cout<<arr1[i][j]<<" ";
        }
    }
}