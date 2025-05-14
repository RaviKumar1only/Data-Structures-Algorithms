#include<iostream>
#include <math.h>
using namespace std;

// int main()
// {
//     int power = 5, number = 2;
//     cout<<pow(number, power);
// }


int main(){
    int power, number, result=1;
    cout<<"Enter number : ";
    cin>>number;
    cout<<"Enter a power: ";
    cin>>power;

    for(int i=1; i<=power; i++){
        result = result * number;
    }

    cout<<result<<endl;

    return 0;
}