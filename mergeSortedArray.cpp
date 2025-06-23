#include<iostream>
#include<vector>
using namespace std;
void mergeSortedArray(vector<int>& vec1,int m,vector<int>& vec2,int n){
    int idx=n+m-1,i=m-1,j=n-1;
    while(i>=0 && j>=0){
        if(vec1[i]>=vec2[j]){
            vec1[idx]=vec1[i];
            idx--;
            i--;
        }
        else{
            vec1[idx]=vec2[j];
            idx--;
            j--;
        }
    }
    while(j>=0){
        vec1[idx]=vec2[j];
        idx--;
        j--;
    }
}
int main(){
    vector<int>vec1={1,2,3,0,0,0};
    vector<int>vec2={4,5,6};
    int m=3;
    int n=3;
    mergeSortedArray(vec1,m,vec2,n);
    for(int i:vec1){
        cout<<i<<" ";
    }
    return 0;
}