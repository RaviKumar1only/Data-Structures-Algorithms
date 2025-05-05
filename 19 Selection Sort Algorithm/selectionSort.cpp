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
        int ans=INT32_MAX, index=-1;
        for(int i=j; i<size; i++){
            if(arr[i]<ans)
            {
                ans=arr[i];
                index=i;
            }
        }
        swap(arr[index],arr[j]);
    }

    cout<<"Sorted array is : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}