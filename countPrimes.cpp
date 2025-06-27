#include<iostream>
#include<vector>
using namespace std;
int numOfPrimes(int n){
    vector<bool>isPrime(n+1,true);
    int ans=0;
    for(int i=2;i<n;i++){
        if(isPrime[i]){
            ans++;
            for(int j=2*i;j<n;j=j+i){
                isPrime[j]=false;
            }
        }
    }
    return ans;
}
int main(){
    int n=50;
    int t=numOfPrimes(n);
    cout<<t<<endl;
    return 0;
}