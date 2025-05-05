#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int last=0, pre=1, curr=0;
    for(int i=2; i<n; i++)
    {
        curr = pre + last;
        last = pre;
        pre = curr;
    }
    cout<<"Fibonacci number is: "<<curr;

    return 0;
}