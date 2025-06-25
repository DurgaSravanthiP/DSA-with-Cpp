#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    // FOR CHARACTER ARRAYS
    // char str[6]="hello";
    // cout<<str<<endl;
    // int st=0,end=5;
    // while(st<end){
    //     swap(str[st],str[end]);
    //     st++;
    //     end--;
    // }
    // for(char i:str){
    //     cout<<i;
    // }

    // STRINGS
    string str="hello";
    reverse(str.begin(),str.end());
    cout<<str;
    return 0;
}