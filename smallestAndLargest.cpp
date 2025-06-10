#include<iostream>
#include<algorithm>
using namespace std;
int largest(int n,int nums[]){
    int larg = INT8_MIN;
    for(int i=0;i<n;i++){
        // if(nums[i]>larg){
        //     larg = nums[i];
        // }
        larg = max(nums[i],larg);
    }
    return larg;
}
int smallest(int n,int nums[]){
    int smal = INT8_MAX;
    for(int i=0;i<n;i++){
        // if(nums[i]<smal){
        //     smal = nums[i];
        // }
        smal = min(nums[i],smal);
    }
    return smal;
}
int main(){
    int n=5;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    int larg = largest(n,nums);
    int smal = smallest(n,nums);
    cout<<"Largest: "<<larg<<endl;
    cout<<"Smallest: "<<smal<<endl;
    return 0;
}