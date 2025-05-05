#include<iostream>
using namespace std;

// int main()
// {
//     bool b;
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;

//     if(n<2)
//     {
//         b = true;
//     }

//     for(int i=2; i<n; i++)
//     {
//         if(n % i == 0)
//         {
//             b = true;
//         }
//     }

//     if(b==true)
//         cout<<"Not Prime";
//     else
//         cout<<"Prime";
// }


// 2nd Method


int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(n<2)
    {
        cout<<"Not Prime";
        return 0;
    }
    else
    {
        for(int i=2; i<n; i++)
        {
            if( n % i == 0)
            {
                cout<<"Not Prime";
                return 0;
            }
        }
        cout<<"Prime";
    }
}