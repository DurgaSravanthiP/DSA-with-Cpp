#include<iostream>
using namespace std;
// brute force approach
// int gcd(int a,int b){
//     int ans=1;
//     if(a==0) return b;
//     if(b==0) return a;
//     if(a==b) return a;
//     for(int i=1;i<=min(a,b);i++){
//         if(a%i==0 && b%i==0){
//             ans=i;
//         }
//     }
//     return ans;
// }

// optimised approach
// int gcd(int a,int b){
//     while(a>0 && b>0){
//         if(a<b){
//             b=b%a;
//         }
//         else{
//             a=a%b;
//         }
//     }
//     if(a==0) return b;
//     return a;
// }

// Recursion Approach
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
// lcm(a,b)*gcd(a,b)=a*b
int lcm(int a,int b){
    int ans=gcd(a,b);
    return (a*b)/ans;
}
int main(){
    int a=20;
    int b=28;
    int ans=lcm(a,b);
    cout<<ans<<endl;
    return 0;
}