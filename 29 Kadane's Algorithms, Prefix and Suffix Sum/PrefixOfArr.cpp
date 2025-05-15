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

    vector<int>prefix(n);
    prefix[0] = arr[0];
    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }

    cout<<"Prefix array is: ";
    
    for(int i=0; i<n; i++){
        cout<<prefix[i]<<" ";
    }

    return 0;
}