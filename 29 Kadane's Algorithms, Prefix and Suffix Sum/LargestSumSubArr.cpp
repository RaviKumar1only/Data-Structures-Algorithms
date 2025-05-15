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

    int maxi = INT32_MIN, prefix=0;
    for(int i=0; i<n; i++){
        prefix += arr[i];
        maxi = max(maxi, prefix);
        if(prefix<0){
            prefix = 0;
        }
    }

    cout << "Largest sum is: " << maxi << endl;
    return 0;
}