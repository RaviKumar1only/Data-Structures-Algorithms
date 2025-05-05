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

        // print number
        for(int col=1; col<=row; col++)
        {
            cout<<col<<" ";
        }

        // print number
        for(int col=1; col<=row-1; col++)
        {
            cout<<row-col<<" ";
        }

        cout<<endl;
    }
}