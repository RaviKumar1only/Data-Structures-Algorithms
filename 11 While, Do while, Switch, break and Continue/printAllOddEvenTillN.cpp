#include<iostream>
using namespace std;

int main(){
    int num, i=2;
    cout<<"Enter a number: ";
    cin>>num;

    cout<<"All even numbers: ";
    while(i<=num){
        if(i%2==0){
            cout<<i<<" ";
        }
        i++;
    }

    cout<<endl;

    cout<<"All odd numbers: ";
    i = 2;
    while(i<=num){
        if(i%2!=0){
            cout<<i<<" ";
        }
        i++;
    }

    return 0;
}