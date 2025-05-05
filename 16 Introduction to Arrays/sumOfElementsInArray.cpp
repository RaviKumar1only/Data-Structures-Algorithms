#include<iostream>
using  namespace std;

int main() {
    int sum=0;
    int arr[5] = {9,3,7,8,20};
    for(int i=0; i<5; i++){
        sum = sum + arr[i];
    }
    cout<<"Sum of array's elements: "<<sum<<endl;
    return 0;
}