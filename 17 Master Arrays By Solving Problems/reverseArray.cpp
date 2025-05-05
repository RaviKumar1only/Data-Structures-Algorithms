#include<iostream>
using namespace std;

// 1st way

// int main()
// {
//     int n;
//     cout<<"Enter size of array: ";
//     cin>>n;
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};

//     int start=0, end=n-1;
//     while(start<=end)
//     {
//         int x = arr[start];
//         arr[start] = arr[end];
//         arr[end] = x;
//         start++;
//         end--;
//     }

//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// 2nd way

// int main()
// {
//     int arr[5]={1,2,3,4,5}, temp[5];
//     int i=0, j=4;
//     while(i<=4)
//     {
//         temp[j]=arr[i];
//         j--;
//         i++;
//     }
    
//     while(i<=4)
//     {
//         i++;
//         arr[i] = temp[i];
//     }

//     for(int i=0; i<=4; i++)
//     {
//         cout<<arr[i];
//     }
//     return 0;
// }


// 3rd way

int main(){
    int arr[10]={1,2,3,4,5};
    int i=0, j=4;
    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}