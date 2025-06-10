#include<iostream>
#include<algorithm>
using namespace std;
void reverseArr(int a[],int n){
    for(int i=0;i<n/2;i++){
        swap(a[i],a[n-i-1]);
    }
}
int main(){
    int n=5;
    int a[n] = {4,3,7,8,1};
    reverseArr(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

// #include<iostream>
// using namespace std;
// void reverseArray(int arr[],int sz){
//     int start = 0, end = sz-1;
//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }

// }
// int main(){
//     int arr[] = {4,2,7,8,1,2,5};
//     int sz = 7;
//     reverseArray(arr,sz);
//     for(int i=0;i<sz;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }