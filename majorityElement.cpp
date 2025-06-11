#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// Brute force approach
// int majorityEle(vector<int>nums){
//     int n=nums.size();
//     for(int val: nums){
//         int freq =0;
//         for(int j: nums){
//             if(val==j){
//                 freq++;
//             }
//         }
//         if(freq>n/2){
//             return val;
//         }
//     }
//     return -1;
// }

// optimised with tc = o(nlogn)
// int majorityEle(vector<int>nums){
//     int n=nums.size();
//     sort(nums.begin(),nums.end());
//     int freq=1, ans=nums[0];
//     for(int i=1;i<n;i++){
//         if(nums[i]==nums[i-1]) freq++;
//         else{
//             freq=1, ans=nums[i];
//         }
//         if(freq>n/2){
//             return ans;
//         }
//     }
//     return ans;
// }

// Moore's Voting Algorithm
int majorityEle(vector<int>nums){
    int n = nums.size();
    int freq=0,ans = 0;
    for(int i=0;i<n;i++){
        if(freq==0) ans=nums[i];
        else if(nums[i]==ans) freq++;
        else freq--;
    }
    return ans;
}
int main(){
    vector<int>nums = {1,2,2,1,1};
    int t = majorityEle(nums);
    cout<<t;
    return 0;
}