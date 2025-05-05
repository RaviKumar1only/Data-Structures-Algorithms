#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,4,5,6};
    int N = 6;

    int sum=0;
    for(int i=0; i<5; i++){
        sum = sum + arr[i];
    }

    int sum1 = (N*(N+1))/2;

    cout<<(sum1)-(sum);
}