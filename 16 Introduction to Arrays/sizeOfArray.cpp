#include<iostream>
using namespace std;

int main() {
// Size of a variable
    int n=5;
    cout << sizeof n << endl;

// Size of an array
    int arr[5] = {1,2,3,4,5};
    cout << sizeof arr << endl;

// Total numbers of elements in array
    int arr1[5] = {10,20,30,40,50};
    cout << sizeof(arr)/sizeof(arr[0]) << " ";

    return 0;
}
