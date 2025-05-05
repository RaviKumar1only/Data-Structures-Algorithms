#include<iostream>
using namespace std;

void fun(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int arr[10]={10,20,30,40,50};
    fun(arr, 5);
}