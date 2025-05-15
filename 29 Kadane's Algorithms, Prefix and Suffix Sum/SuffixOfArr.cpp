#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int>suffix(n);
    suffix[n-1] = arr[n-1];
    for(int i=n-2; i>=0; i--){
        suffix[i] = suffix[i+1] + arr[i];
    }

    cout<<"Suffix array is : ";
    for(int i=0; i<n; i++){
        cout<<suffix[i]<<" ";
    }

    return 0;
}