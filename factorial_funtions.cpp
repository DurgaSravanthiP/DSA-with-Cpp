#include<iostream>
using namespace std;
int fact(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    cin>>n;
    int s = fact(n);
    cout<<s<<endl;
    return 0;
}