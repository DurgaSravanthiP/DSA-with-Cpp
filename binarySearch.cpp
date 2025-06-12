#include<iostream>
#include<vector>
using namespace std;
// int binarySearch(vector<int>& arr,int target){
//     int n=arr.size();
//     int st=0,end=n-1;
//     while(st<=end){
//         // int mid=(st+end)/2;
//         int mid=st+ (end-st)/2;
//         if(arr[mid]>target) end=mid-1;
//         else if(arr[mid]<target) st=mid+1;
//         else return mid;
//     }
//     return -1;
// }

// with Recursion
int binarySearch(vector<int>& arr,int target,int st,int end){
    if(st<=end){
        // int mid=(st+end)/2;
        int mid=st+ (end-st)/2;
        if(arr[mid]>target) return binarySearch(arr,target,st,mid-1);
        else if(arr[mid]<target) return binarySearch(arr,target,mid+1,end);
        else return mid;
    }
    return -1;
}
int main(){
    vector<int>arr = {-1,0,3,4,5,12};
    int target=12;
     int n=arr.size();
    int st=0,end=n-1;
    int idx = binarySearch(arr,target,st,end);
    cout<<idx<<endl;

    return 0;
}