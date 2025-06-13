#include<iostream>
#include<vector>
using namespace std;
bool isValid(vector<int>& arr,int n,int m,int maxAllowedTime){
    int painter=1,time=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxAllowedTime) return false;
        if(time+arr[i]<=maxAllowedTime) time+=arr[i];
        else{
            painter++;
            time=arr[i];
        }
    }
    return painter>m?false:true;
}
int minTimeToPaint(vector<int>& arr,int n,int m){
    if(m>n) return -1;
    int sum=0,maxVal=INT8_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxVal=max(maxVal,arr[i]);
    }
    int ans=-1;
    int st=maxVal,end=sum;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isValid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int>arr={40,30,20,10};
    int n=4,m=2;
    int ans= minTimeToPaint(arr,n,m);
    cout<<ans<<endl;
    return 0;
}