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
        bool swaped=0;
        for(int i=0; i<size-j; i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i], arr[i+1]);
                swaped=1;
            }
        }
        if(swaped==0)
        {
            break;
        }
    }

    cout<<"Sorted array is : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}