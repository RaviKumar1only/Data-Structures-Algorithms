#include<iostream>
using namespace std;

// int main()
// {
//     int a=5, b=6;
//     // bool x = a > b;
//     cout<<(a>b);
// }


int main()
{
    int x=5, y=3, z=6;
    int a = x>y<z==z!=x;
    cout<<a;

}

// Presidence {<, >, <=, >=} > {==, !=}
// Associativity Rule (Left to Right)