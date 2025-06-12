#include<iostream>
#include<vector>
using namespace std;
// Brute Force Approach
// int containerWithMaxWater(vector<int>& heights){
//     int n = heights.size();
//     int maxWater=0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             int width=j-i;
//             int height=min(heights[i],heights[j]);
//             int area=width*height;
//             maxWater=max(area,maxWater);
//         }
//     }
//     return maxWater;
// }

// Optimised Approach
int containerWithMaxWater(vector<int>& heights){
    int n=heights.size();
    int lp=0,rp=n-1;
    int mW=0;
    while(lp<rp){
        int width=rp-lp;
        int height=min(heights[lp],heights[rp]);
        int cW = width*height;
        mW=max(cW,mW);
        heights[lp]<heights[rp]?lp++:rp--;
    }
    return mW;
}
int main(){
    vector<int>heights = {1,8,6,2,5,4,8,3,7};
    int maxWater = containerWithMaxWater(heights);
    cout<<maxWater;
    return 0;
}