#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter the year: ";
    cin>>num;

    if(num%400==0){
        cout<<"Leep year";
    }
    else if(num%4==0 && num%100!=0){
        cout<<"Leep year";
    }
    else{
        cout<<"Not a leep year";
    }

    return 0;
}