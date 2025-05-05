#include<iostream>
using namespace std;

// int main(){
//     we can initialize like this
//     int arr[5] = {1,2,3,4,5};
//     int arr[5] = {1,2,3};
//     int arr[5] = {0};
//     int arr[5] = {1};
//     int arr[5];
//     for(int i=0; i<5; i++)
//         cin>>arr[i];
//     for(int i=0; i<5; i++)
//         cout<<arr[i]<<" ";

//     return 0;
// }


int main() {
    // It's not a good habit always enter integer number in []
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++)
        cin>>arr[i];
    for(int i=0; i<5; i++)
        cout<<arr[i]<<" ";

    return 0;
}