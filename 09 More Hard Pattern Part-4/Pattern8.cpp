#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int row=1; row<=n; row++)
    {
        // print top left spaces
        for(int col=1; col<=n-row; col++)
        {
            cout<<" ";
        }

        // print top starts
        for(int col=1; col<=row; col++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    for(int row=1; row<=n; row++)
    {
        // print bottom spaces
        for(int col=1; col<=row-1; col++)
        {
            cout<<" ";
        }

        // print bottom stars
        for(int col=1; col<=n-row+1; col++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
}