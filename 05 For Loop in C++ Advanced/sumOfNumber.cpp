#include<iostream>
using namespace std;

int main()
{
    int sum=0, n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    cout<<"Sum is : "<<sum<<endl;

    return 0;
}