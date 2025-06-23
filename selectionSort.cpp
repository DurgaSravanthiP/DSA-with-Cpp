#include<iostream>
using namespace std;
// Ascending Order
// void selectionSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int smalIdx=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[smalIdx]) smalIdx=j;
//         }
//         swap(arr[i],arr[smalIdx]);
//     }
// }

// Descending Order
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int smalIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[smalIdx]) smalIdx=j;
        }
        swap(arr[i],arr[smalIdx]);
    }
}
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n=5;
    int arr[n]={4,1,5,2,3};
    selectionSort(arr,n);
    printArr(arr,n);
    return 0;
}