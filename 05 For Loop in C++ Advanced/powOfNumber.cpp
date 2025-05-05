#include<iostream>
using namespace std;

int main()
{
    int num, pow, ans=1;
    cout<<"Enter number: ";
    cin>>num;

    cout<<"Enter power of number: ";
    cin>>pow;
    
    for(int i=1; i<=pow; i++)
    {
        ans = ans*num;
    }

    cout<<ans;

    return 0;
}