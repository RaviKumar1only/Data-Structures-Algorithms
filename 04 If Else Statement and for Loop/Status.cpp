#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter value of num: ";
    cin>>num;

    if(num>0)
        cout<<"Number is Positive";
    else if(num==0)
        cout<<"Number is zero";
    else
        cout<<"Number is Negative";

    return 0;
}