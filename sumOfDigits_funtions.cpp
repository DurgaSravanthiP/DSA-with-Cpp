#include<iostream>
using namespace std;
int sumOfDigits(int n1){
    int sum = 0;
    while(n1!=0){
        int rem = n1%10;
        sum = sum + rem;
        n1 = n1/10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int t = sumOfDigits(abs(n));
    cout<<t;
    return 0;
}