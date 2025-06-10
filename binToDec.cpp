#include<iostream>
using namespace std;
int binToDec(int bin){
    int ans = 0;
    int pow = 1;
    while(bin>0){
        int rem = bin%10;
        bin = bin/10;
        ans += rem*pow;
        pow *= 2;
    }
    return ans;
}
int main(){
    int bin;
    cout<<"Enter binary number: ";
    cin>>bin;
    int dec = binToDec(bin);
    cout<<"Decimal number: "<<dec<<endl;
}