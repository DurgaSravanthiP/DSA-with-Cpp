// #include<iostream>
// #include<algorithm>
// using namespace std;
// int largest(int n,int nums[]){
//     int larg = INT8_MIN;
//     for(int i=0;i<n;i++){
//         // if(nums[i]>larg){
//         //     larg = nums[i];
//         // }
//         larg = max(nums[i],larg);
//     }
//     return larg;
// }
// int smallest(int n,int nums[]){
//     int smal = INT8_MAX;
//     for(int i=0;i<n;i++){
//         // if(nums[i]<smal){
//         //     smal = nums[i];
//         // }
//         smal = min(nums[i],smal);
//     }
//     return smal;
// }
// int largeidx(int n,int nums[],int larg){
//     for(int i=0;i<n;i++){
//         if(nums[i]==larg){
//             return i;
//         }
//     }
// }
// int smallidx(int n,int nums[],int smal){
//     for(int i=0;i<n;i++){
//         if(nums[i]==smal){
//             return i;
//         }
//     }
// }
// void maxMinSwap(int nums[],int lidx,int sidx){
//     swap(nums[lidx],nums[sidx]);
// }
// int main(){
//     int n=5;
//     int nums[n];
//     for(int i=0;i<n;i++){
//         cin>>nums[i];
//     }
//     int larg = largest(n,nums);
//     int smal = smallest(n,nums);
//     cout<<"Largest: "<<larg<<endl;
//     cout<<"Smallest: "<<smal<<endl;
//     int lidx = largeidx(n,nums,larg);
//     int sidx = smallidx(n,nums,smal);
//     maxMinSwap(nums,lidx,sidx);
//     for(int i=0;i<n;i++){
//         cout<<nums[i]<<" ";
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
void maxMinSwap(int a[],int n){
    int minEle = INT8_MAX;
    int maxEle = INT8_MIN;
    int minIdx = 0;
    int maxIdx = 0;
    for(int i=0;i<n;i++){
        if(a[i]>maxEle){
            maxEle = a[i];
            maxIdx = i;
        }
        if(a[i]<minEle){
            minEle = a[i];
            minIdx = i;
        }
    }
    swap(a[maxIdx],a[minIdx]);
}
int main(){
    int n=5;
    int a[n] = {1,2,3,4,5};
    maxMinSwap(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}