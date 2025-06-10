#include<iostream>
using namespace std;
int fact(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int nCr(int n, int r){
    int fact_n = fact(n);
    int fact_r = fact(r);
    int fact_nminr = fact(n-r);
    int ncr = fact_n / (fact_r * fact_nminr);
    return ncr;
}
int main(){
    int n,r;
    cout<<"Enter n and r: ";
    cin>>n>>r;
    int ncr = nCr(n,r);
    cout<<"ncr = "<<ncr;
    return 0;
}