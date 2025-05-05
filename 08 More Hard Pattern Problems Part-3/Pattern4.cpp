#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row=1; row<=n; row++)
    {
        // print space
        for(int col=1; col<=n-row; col++)
        {
            cout<<"  ";
        }

        // print character
        for(int col=1; col<=row; col++)
        {
            cout<<char('a'+col-1)<<" ";
        }
        
        cout<<endl;
    }
}