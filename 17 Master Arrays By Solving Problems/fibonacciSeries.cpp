#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;

//     int arr[100];
//     arr[0]=0;
//     arr[1]=1;
//     for(int i=2; i<n; i++){
//         arr[i]=arr[i-2]+arr[i-1];
//     }

//     cout<<"Fibonacci number is : "<<arr[n-1];

// }


int main() {
    int n;
    cout<<"Enter which place number you want: "; 
    cin>>n;

    int arr[1000];
    arr[0] = 0;
    arr[1] = 1;
    for( int i=2; i<n; i++){
        arr[i] = arr[i-2] + arr[i-1];
    }
    cout<<"Fibonacci number is : " <<arr[n-1];
}