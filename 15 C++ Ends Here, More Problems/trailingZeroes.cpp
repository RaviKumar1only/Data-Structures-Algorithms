#include<iostream>
using namespace std;

int trailingZero(int num){
    int rem, ans=0, count=0;
    while(num != 0){
        rem = num % 10;
        if (rem == 0){
            count++;
        }
        else{
            return count;
        }
        num = num / 10;
    }
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int ans = trailingZero(n);

    if(ans != 0){
        cout<<"Trailing zero's are : "<<ans<<endl;
    }
    else{
        cout<<"Trailwing zero's are: "<<ans<<endl;
    }

    return 0;
}