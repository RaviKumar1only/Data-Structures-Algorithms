#include<iostream>
using namespace std;

int palindrome(int num) {
    int rem, ans = 0;
    while(num != 0){
        rem = num % 10;
        num = num / 10;
        ans = ans * 10 + rem;
    }
    return ans;
}


int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(n<0){
        cout<<"Number is not Palindrome"<<endl;
        return 0;
    }

    int ans = palindrome(n);

    if(ans != n){
        cout<<"Number is not Palindrome."<<endl;
    }
    else{
        cout<<"Number is Palindrome."<<endl;
    }

    return 0;
}