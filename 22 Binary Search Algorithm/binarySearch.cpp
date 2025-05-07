#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,100,500};

    int key;
    cout<<"Enter a key : ";
    cin>>key;

    int start=0, end=4, mid=0;
    while(start<=end){
        mid = start + (end-start)/2;
        if(arr[mid]==key){
            cout<<"Found";
            break;
        }
        else if(arr[mid]<key){
            start = mid + 1;
        }
        else if(arr[mid]>key){
            end = mid - 1;
        }
    }
    if(arr[mid]!=key){
        cout<<"Not found";
    }
}