#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int i=1;
    while(i<=10)
    {
        cout<<i*n<<endl;
        i++;
    }

    return 0;
}