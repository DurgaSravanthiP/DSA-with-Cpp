#include<iostream>
using namespace std;
int reverse(int n){
    int ans=0;
    while(n>0){
        int rem = n%10;
        n = n/10;
        ans = ans*10 + rem;
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int rev = reverse(n);
    cout<<"Reversed number: "<<rev<<endl;
    return 0;
}