#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int sum=0;

    int i=1;        // initialize
    do{
        sum=sum+i;
        i++;        // update
    }while(i<=n);   //break or condition

    cout<<sum;

    return 0;
}