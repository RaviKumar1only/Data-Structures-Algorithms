#include<iostream>
using  namespace std;

int main() {
    int ans = INT32_MAX;
    int arr[5] = {9,3,7,50,2};
    for(int i=0; i<5; i++)
        if(arr[i]<ans)
            ans = arr[i];

    cout<<"Minimum element in array: "<<ans<<endl;
    return 0;
}