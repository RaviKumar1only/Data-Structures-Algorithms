#include<iostream>
using namespace std;

// int main()
// {
//     for(int i=1; i<=10; i++)
//     {
//         cout<<5*i<<" ";
//     }
// }

// OR

// int main()
// {
//     for (int i=6; i<=60; i=i+6)
//     {
//         cout<<i<<" ";
//     }
// }

// OR

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i=1; i<=10; i++)
    {
        cout<<n*i<<endl;
    }

    return 0;
}