#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() 
{
    // //create a vector, declare
    // vector<int>nums;

    // // size and capacity
    // cout<<"Size of nums: "<<nums.size()<<endl;
    // cout<<"Capacity of nums: "<<nums.capacity()<<endl;

    // // add elements
    // nums.push_back(2);
    // nums.push_back(5);
    // nums.push_back(8);
    
    // // size and capacity
    // cout<<"Size of nums: "<<nums.size()<<endl;
    // cout<<"Capacity of nums: "<<nums.capacity()<<endl;

    // // update the value
    // nums[1] = 10;




    // // create another vector
    // vector<int>nums1(5, 1);

    // // size and capacity
    // cout<<"Size of nums1: "<<nums1.size()<<endl;
    // cout<<"Capacity of nums1: "<<nums1.capacity()<<endl;

    // nums1.push_back(8);
    // cout<<"Size of nums1: "<<nums1.size()<<endl;
    // cout<<"Capacity of nums1: "<<nums1.capacity()<<endl;



    // // we can initialize like this
    // vector<int>nums2 = {3,4,7,6,1};
    // cout<<nums2.size();




    // // Delete value from vector

    // vector<int>nums3;
    // // add elements
    // nums3.push_back(27);
    // nums3.push_back(52);
    // nums3.push_back(81);
    // nums3.push_back(85);
    // nums3.push_back(83);
    // nums3.push_back(87);
    // // size and capacity
    // cout<<"Size of nums3: "<<nums3.size()<<endl;
    // cout<<"Capacity of nums3: "<<nums3.capacity()<<endl;


    // nums3.pop_back();
    // // size and capacity
    // cout<<"Size of nums3: "<<nums3.size()<<endl;
    // cout<<"Capacity of nums3: "<<nums3.capacity()<<endl;


    // //remove the element
    // nums3.erase(nums3.begin() + 1);
    // cout<<"Size of nums3: "<<nums3.size()<<endl;
    // cout<<"Capacity of nums3: "<<nums3.capacity()<<endl;

    // // itrate the elements
    // for(int i=0; i<nums3.size(); i++){
    //     cout<<nums3[i]<<" ";
    // }

    // //insert the element
    // nums3.insert(nums3.begin()+1, 50);
    // cout<<endl;
    // for(int i=0; i<nums3.size(); i++){
    //     cout<<nums3[i]<<" ";
    // }

    // // replace element one more way
    // nums3[1] = 100;
    // cout<<endl;
    // for(int i=0; i<nums3.size(); i++){
    //     cout<<nums3[i]<<" ";
    // }

    
    // //remove all the elements from vector
    // nums3.clear();
    // cout<<endl;
    // cout<<"Size of nums3: "<<nums3.size()<<endl;
    // cout<<"Capacity of nums3: "<<nums3.capacity()<<endl;



    // vector<int>nums4;
    // nums4.push_back(2);
    // nums4.push_back(3);
    // nums4.push_back(7);
    // nums4.push_back(0);
    // nums4.push_back(1);
    // // printing first element
    // cout<<nums4[0]<<endl;
    // cout<<nums4.front()<<endl;
    // // printing last element
    // cout<<nums4[nums4.size()-1]<<endl;
    // cout<<nums4.back()<<endl;


    // //copy vector values 1 to another easily
    // vector<int>a;
    // a = nums4;
    // cout<<a.size()<<endl;


    // //itrate over the vector elements
    // for(auto i: a) {
    //     cout<<i<<" ";
    // }



    vector<int>ans;
    ans.push_back(22);
    ans.push_back(32);
    ans.push_back(21);
    ans.push_back(8);
    ans.push_back(13);

    //sort the array increasing order
    sort(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

    cout<<endl;

    // sort in decresing order
    sort(ans.begin(), ans.end(), greater<int>());
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

    cout<<endl;

    // another way
    sort(ans.rbegin(), ans.rend());
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

    cout<<endl;

    // search in binary search
    // it return 0 -> not present and 1 -> persent
    cout<<binary_search(ans.begin(), ans.end(), 21);

    cout<<endl;

    // returning the index of element
    cout<<find(ans.begin(), ans.end(), 55)-ans.begin();
}