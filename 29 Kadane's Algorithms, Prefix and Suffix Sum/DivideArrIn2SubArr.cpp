// // 1st method is using nested loop -> T.C. = O(N^2)
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of the array: "<<endl;
//     cin>>n;
//     vector<int>arr(n);
//     cout<<"Enter the elements of the array: "<<endl;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     for(int i=0; i<n-1; i++){
//         int sum0 = 0, sum1 = 0;
//         for(int j=0; j<=i; j++){
//             sum0 += arr[j];
//         }
//         for(int j=i+1; j<n; j++){
//             sum1 += arr[j];
//         }
//         if(sum0 == sum1){
//             cout<<"Yes persent."<<endl;
//             return 0;
//         }
//     }
//     cout<<"Not persent."<<endl;

//     return 0;
// }



//2nd method is using prefix approch -> T.C = O(N)
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n < 2) {
        cout << "Not present (array too small to split).";
        return 0;
    }
    
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int prefixSum = 0, rightHalfSum = 0;
    for (int i = 0; i < n - 1; i++) {
        prefixSum += arr[i];
        rightHalfSum = totalSum - prefixSum;
        if (prefixSum == rightHalfSum) {
            cout << "Yes, split possible";
            return 0;
        }
    }

    cout << "No, split not possible";
    return 0;
}