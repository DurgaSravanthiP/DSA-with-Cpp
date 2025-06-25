#include<iostream>
#include<string>
using namespace std;
bool isAlphaNumeric(char ch){
    if((ch>='0' && ch<='9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
        return true;
    }
    return false;
}
bool isPalindrome(string str){
    int st=0,end=str.length()-1;
    while(st<end){
        if(!isAlphaNumeric(str[st])){
            st++;
            continue;
        }
        if(!isAlphaNumeric(str[end])){
            end--;
            continue;
        }
        if(tolower(str[st]) != tolower(str[end])) return false;
        st++;
        end--;
    }
    return true;
}
int main(){
    string str="madfdfyusam";
    bool t=isPalindrome(str);
    cout<<t<<endl;
    // if(isPalindrome(str)){
    //     cout<<"YES"<<endl;
    // }
    // else{
    //     cout<<"NO";
    // }
    return 0;
}