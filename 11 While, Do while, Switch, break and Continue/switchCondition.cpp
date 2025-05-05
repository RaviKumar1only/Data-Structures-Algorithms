#include<iostream>
using namespace std;

// int main()
// {
//     int i;
//     cout<<"Enter a number: ";
//     cin>>i;

//     switch(i)
//     {
//         case 1:
//         cout<<"rohit";
//         break;  // it use to break the program

//         case 2:
//         cout<<"mohit";
//         break;

//         default:
//         cout<<"None";
//     }
// }


int main()
{
    char name;
    cout<<"Enter a character: ";
    cin>>name;

    switch(name)    // we can use integer and character inside it
    {
        case 'a':
        cout<<"rohit";
        break;  // it use to break the program

        case 'b':
        cout<<"mohit";
        break;

        default:
        cout<<"None";
    }
}