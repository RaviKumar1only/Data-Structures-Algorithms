#include<iostream>
using namespace std;

int main() {
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,0,2,4};

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<3; i++){
        int start=0, end=4-1;
        while(start<end){
            swap(arr[i][start], arr[i][end]);
            start++, end--;
        }
    }

    cout<<"Reversed Each Row of the Array: "<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}