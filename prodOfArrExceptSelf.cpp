#include<iostream>
#include<vector>
using namespace std;
// Brute Force Approach
// vector<int> productExceptSelf(vector<int>& nums){
//     int n=nums.size();
//     vector<int>ans(n,1);
//     for(int i=0;i<n;i++){
//         int prod=1;
//         for(int j=0;j<n;j++){
//             if(i!=j){
//                 prod*=nums[j];
//             }
//         }
//         // ans.push_back(prod);
//         ans[i] = prod;
//     }
//     return ans;
// }

// Optimised Solution tc=o(n) sc=o(n)
// vector<int> productExceptSelf(vector<int>& nums){
//     int n=nums.size();
//     vector<int>prefix(n,1);
//     vector<int>suffix(n,1);
//     vector<int>ans(n,1);
//     for(int i=1;i<n;i++){
//         prefix[i] = prefix[i-1]*nums[i-1];
//     }
//     for(int i=n-2;i>=0;i--){
//         suffix[i] = suffix[i+1]*nums[i+1];
//     }
//     for(int i=0;i<n;i++){
//         ans[i] = prefix[i]*suffix[i];
//     }
//     return ans;
// }

// Optimal solution with  space complexity = o(1)
vector<int> productExceptSelf(vector<int>& nums){
    int n=nums.size();
    vector<int>ans(n,1);
    for(int i=1;i<n;i++){
        ans[i] = ans[i-1]*nums[i-1];
    }
    int suffix=1;
    for(int i=n-2;i>=0;i--){
        suffix*=nums[i+1];
        ans[i]*=suffix;
    }
    return ans;
}

int main(){
    vector<int>nums={1,2,3,4};
    vector<int>ans = productExceptSelf(nums);
    for(int i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}