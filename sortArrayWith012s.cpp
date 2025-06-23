#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// BruteForce Tc=O(nlogn)
// void sortArray(vector<int>& nums){
//     sort(nums.begin(),nums.end());
// }

// Optimised Tc=O(n)
// void sortArray(vector<int>& nums){
//     int n=nums.size();
//     int c0=0,c1=0,c2=0;
//     for(int i=0;i<n;i++){
//         if(nums[i]==0) c0++;
//         else if(nums[i]==1) c1++;
//         else c2++;
//     }
//     int idx=0;
//     for(int i=0;i<c0;i++){
//         nums[idx++]=0;
//     }
//     for(int i=0;i<c1;i++){
//         nums[idx++]=1;
//     }
//     for(int i=0;i<c2;i++){
//         nums[idx++]=2;
//     }
// }

// Optimal Tc=O(n) with single pass - Dutch National Flag Algorithm
void sortArray(vector<int>& nums){
    int n=nums.size();
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            mid++;
            low++;
        }
        else if(nums[mid]==1) mid++;
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}
int main(){
    vector<int>nums={2,0,2,1,1,0,1,2,0,0};
    sortArray(nums);
    for(int i: nums){
        cout<<i<<" ";
    }
    return 0;
}