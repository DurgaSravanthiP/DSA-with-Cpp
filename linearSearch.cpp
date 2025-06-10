#include<iostream>
using namespace std;
int linearSearch(int n, int arr[], int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[7] = {4,2,7,8,1,2,5};
    int target = 84;
    int idx = linearSearch(7,arr,target);
    cout<<"Index is "<<idx<<endl;
    return 0;
}