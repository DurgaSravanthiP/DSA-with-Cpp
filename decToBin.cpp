#include<iostream>
using namespace std;
int decToBin(int n){
    int bin = 0;
    int pow = 1; 
    while(n>0){
        int rem = n%2;
        n = n/2;
        bin += rem*pow;
        pow = pow*10;
    }
    return bin;
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int bin = decToBin(n);
    cout<<"Binary Number is: "<<bin<<endl;
    for(int i=2;i<=10;i++){
        cout<<i<<" : "<<decToBin(i)<<endl;
    }
    return 0;
}