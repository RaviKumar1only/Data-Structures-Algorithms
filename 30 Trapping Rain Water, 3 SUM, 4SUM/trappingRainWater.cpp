#include<iostream>
#include<vector>
using namespace std;


// // Brute force approch
// int maxWater(vector<int> &height) {
//     int n = height.size();
//     int maxLeft=height[0], minHeight=0, water=0;
//     for(int i=1; i<n-1; i++)
//     {
//         int maxRight=INT32_MIN;
//         for(int j=i+1; j<n; j++)
//         {
//             if(maxRight < height[j])
//             {
//                 maxRight = height[j];
//             }
//         }
        
//         if(maxLeft <= height[i])
//         {
//             maxLeft = height[i];
//         }
        
//         minHeight = min(maxLeft, maxRight);
        
//         if((minHeight - height[i]) > 0)
//         {
//             water += minHeight-height[i];
//         }
//     }
    
//     return water;
// }



// Optimise approch
// Brute force approch
int maxWater(vector<int> &height) {
    int n = height.size();
    vector<int>leftMax;
    vector<int>rightMax;
    leftMax[0]=0;
    int minHeight=0;
    for(int i=1; i<n; i++)
    {
        leftMax[i] = max(leftMax[i-1], height[i-1]);
    }

    rightMax[n-1] = 0;
    for(int i=n-2; i>=0; i--){
        rightMax[i] = max(rightMax[i+1], height[i+1]);
    }
    int water=0;
    for(int i=0; i<n; i++){
        minHeight = min(leftMax[i], rightMax[i]);
        if(minHeight - height[i] >= 0 ){
            water += minHeight - height[i];
        }
    }

    return water;
}

int main()
{
    vector<int>arr;

    int ans = maxWater(arr);

    cout<<"Total Water is : "<<ans<<endl;

    return 0;
}