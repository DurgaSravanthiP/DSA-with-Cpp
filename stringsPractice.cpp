#include<iostream>
#include<string>
using namespace std;
int main(){
    int arr[]={1,2,3};
    cout<<arr<<endl;
    char ch[]={'a','b','c'};
    cout<<ch<<endl;
    cout<<ch[1]<<endl;
    char str[]="hello";
    cout<<str<<endl;
    cout<<str[2]<<endl;
    char str1[100];
    char str2[10];
    cout<<"str1: ";
    cin>>str1;
    cout<<"str2: ";
    cin.getline(str2,10,'$');
    cout<<str2<<endl;
    for(char ch: str2){
        cout<<ch<<" ";
    }
    cout<<endl;
    char str3[]="apna college";
    int len=0;
    for(int i=0;str3[i]!='\0';i++){
        len++;
    }
    cout<<len<<endl;
    string str5="hello";
    cout<<str<<endl;
    str5="apna";
    cout<<str<<endl;
    string s1;
    cin>>s1;
    cout<<s1;
    string s2;
    getline(cin,s2);
    cout<<s2<<endl;
    return 0;
}