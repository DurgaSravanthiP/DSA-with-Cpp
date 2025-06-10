#include<iostream>
using namespace std;
int main(){
    // printing all subarray elements
    // int n=5;
    // int arr[n] = {1,2,3,4,5};
    // for(int st = 0;st<n;st++){
    //     for(int end=st;end<n;end++){
    //         for(int i=st;i<=end;i++){
    //             cout<<arr[i];
    //         }
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // Brute force Approach
    // int n=7;
    // int arr[n] = {3,-4,5,4,-1,7,-8};
    // int maxSum = INT8_MIN;
    // for(int st = 0;st<n;st++){
    //     int currSum = 0;
    //     for(int end=st;end<n;end++){
    //         currSum+=arr[end];
    //         maxSum = max(currSum,maxSum);
    //     }
    // }
    // cout<<maxSum<<endl;

    // Kadane's Algorithm
    int n=7;
    int arr[n] = {3,-4,5,4,-1,7,-8};
    int currSum=0,maxSum=INT8_MIN;
    for(int i=0;i<n;i++){
        currSum +=arr[i];
        maxSum = max(currSum,maxSum);
        if(currSum<0) currSum=0;
    }
    cout<<maxSum<<endl;
    return 0;
}