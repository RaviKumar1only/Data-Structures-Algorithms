#include<iostream>
using namespace std;

int main(){
    int arr[5]={10, 20, 30, 40, 50};
    for(int i=0; i<5; i++){
        if(arr[i]==30){
            cout<<i;
            return 0;
        }
    }
    cout<<"-1";
}