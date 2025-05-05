#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    int ans=0, rem;
    while(num!=0) {
        rem = num % 10;
        num = num / 10;
        if(ans > INT32_MAX/10 || ans < INT32_MIN/10) {
            cout<<"Integer overflow";
            return 0;
        }
        ans = ans * 10 + rem;
    }
    cout<<"Reverse number is: "<<ans;

    return 0;
}