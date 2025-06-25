#include<iostream>
#include<string>
using namespace std;
string removeOccurences(string s,string part){
    while(s.length()>0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}
int main(){
    string s="abcsdbjerabc";
    string part="abc";
    string str=removeOccurences(s,part);
    cout<<str<<endl;
    return 0;
}