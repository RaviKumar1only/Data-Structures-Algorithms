#include<iostream>
using namespace std;

void fun(int arr[][4], int row, int col) {
    // Rows wise printing
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
    }

    cout<<endl;

    // Columns wise printing
    for(int j=0; j<col; j++){
        for(int i=0; i<row; i++){
            cout<<arr[i][j]<<" ";
        }
    }
}

int main() {
    //create 2d array
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    // //printing all the values of the array
    // for(int row=0; row<3; row++){
    //     for(int col=0; col<4; col++){
    //         cout<<arr[row][col]<<" ";
    //     }
    // }


    // print using function
    fun(arr, 3, 4);
}