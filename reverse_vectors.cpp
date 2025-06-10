#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>&vec){
    int t=vec.size()/2;
    for(int i=0;i<t;i++){
        swap(vec[i],vec[2*t-i-1]);
    }
    
}
int main(){
    vector<int>vec = {1,2,3,4};
    reverse(vec);
    for(int val:vec){
        cout<<val<<" ";
    }
    return 0;
}