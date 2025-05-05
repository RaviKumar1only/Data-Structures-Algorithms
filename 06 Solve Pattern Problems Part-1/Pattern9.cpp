#include<iostream>
using namespace std;

// 1st Method

// int main()
// {
//     for(int row=1; row<=5; row++)
//     {
//         for(int col=1; col<=5; col++)
//         {
//             char name = 'a' + col - 1;
//             cout<<name<<" ";
//         }
//         cout<<endl;
//     }
// }

// 2nd Method

// int main()
// {
//     for(int row=1; row<=5; row++)
//     {
//         for(int col=1; col<=5; col++)
//         {
//             cout<<char('a'+col-1)<<" ";
//         }
//         cout<<endl;
//     }
// }

// 3rd Method

int main()
{
    for(int row=1; row<=5; row++)
    {
        for(char col='a'; col<='e'; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}