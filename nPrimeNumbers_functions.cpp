#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
void nPrimeNumbers(int count){
    int num = 2;
    int np = 0;
    while(np<count){
        if(isPrime(num)){
            cout<<num<<" ";
            np++;
        }
        num++;
    }
}
int main(){
    int n;
    cin>>n;
    nPrimeNumbers(n);
    return 0;
}