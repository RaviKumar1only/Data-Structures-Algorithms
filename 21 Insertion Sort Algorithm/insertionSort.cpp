#include<iostream>
using namespace std;
int main(){
    int arr[1000], size;
    cout<<"Enter the size of array : ";
    cin>>size;

    cout<<"Enter the elements of array: ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    for(int j=0; j<size-1; j++)
    {
        for(int i=j; i>0; i--)
        {
            if(arr[i-1]>arr[i])
            {
                swap(arr[i-1],arr[i]);
            }
        }
    }

    cout<<"Sorted array is : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}