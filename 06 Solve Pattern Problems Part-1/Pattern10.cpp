#include<iostream>
using namespace std;

// 1st Method

// int main()
// {
//     int count = 1;
//     for(int row=1; row<=5; row++)
//     {
//         for(int col=1; col<=5; col++)
//         {
//             cout<<col+count-1<<"  ";
//         }
//         count=count+5;
//         cout<<endl;
//     }
// }

// 2nd Method

// int main()
// {
//     int count = 1;
//     for(int row=1; row<=5; row++)
//     {
//         for(int col=1; col<=5; col++)
//         {
//             cout<<count<<"  ";
//             count=count+1;
//         }
//         cout<<endl;
//     }
// }

// 3rd Method

// int main()
// {
//     int count = 1;
//     for(int row=1; row<=5; row++)
//     {
//         for(int col=((row-1)*5+1); col<=((row-1)*5+5); col++)
//         {
//             cout<<col<<"  ";
//         }
//         cout<<endl;
//     }
// }

// 4rth Method

int main()
{
    for(int row=1; row<=5; row++)
    {
        for(int col=1; col<=5; col++)
        {
            cout<<(row-1)*5+col<<"  ";
        }
        cout<<endl;
    }
}