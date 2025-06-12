#include<iostream>
#include<vector>
using namespace std;
int searchRotatedSortedArray(vector<int>& arr,int target){
    int n=arr.size();
    int st=0,end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==target) return mid;
        if(arr[st]<=arr[mid]){
            if(arr[st]<=target && target<=arr[mid]) end=mid-1;
            else st=mid+1;
        }
        else{
            if(arr[mid]<=target && target<=arr[end]) st=mid+1;
            else end=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int>arr={3,4,5,6,7,0,1,2};
    int target=0;
    int idx=searchRotatedSortedArray(arr,target);
    cout<<idx<<endl;
    return 0;
}