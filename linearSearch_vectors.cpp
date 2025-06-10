#include<iostream>
#include<vector>
using namespace std;
bool linearSearch(vector<int>&vec, int key){
    for(int i:vec){
        if(i==key) return true;
    }
    return false;
}
int main(){
    vector<int>vec = {1,2,3,4,5,6};
    int key = 5;
    if(linearSearch(vec,key)){
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Element is not found"<<endl;
    }
    return 0;
}