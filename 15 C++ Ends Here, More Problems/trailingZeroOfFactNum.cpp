#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a factorial number: ";
    cin>>n;

    int count=0;
    while(n>=5){
        count = count + n / 5;
        n = n / 5;
    }

    cout<<"Trailing zeros are : "<<count<<endl;

    return 0;
}