#include<iostream>
using namespace std;

// int main()
// {
//     int arr[5]={10, 20, 30, 40, 50};

//     int largest = INT32_MIN;
//     for(int i=0; i<5; i++)
//     {
//         if(arr[i]>largest)
//         {
//             largest=arr[i];
//         }
//     }
//     int secondLargest = INT32_MIN;
//     for(int i=0; i<5; i++)
//     {
//         if(largest!=arr[i])
//         {
//             secondLargest = max(secondLargest, arr[i]);
//         }
//     }
//     cout<<secondLargest;
// }


int main() {
    int arr[100];
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    cout<<"Enter the values of array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    // finding first largest number 
    int ans = INT32_MIN;
    int maxElementIndex = -1;
    for(int i=0; i<size; i++){
        if( ans < arr[i] )
        {
            ans = arr[i];
            maxElementIndex = i;
        }
    }

    // finding second largest number
    ans = INT32_MIN;
    for( int i=0; i<size; i++){
        if(arr[i] > ans && maxElementIndex != i){
            ans = arr[i];
        }
    }

    cout<<"Second largest number: "<<ans<<endl;
    return 0;

}