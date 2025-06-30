#include<iostream>
using namespace std;
void printDigits(int n){
    while(n!=0){
        int digit=n%10;
        cout<<digit<<endl;
        n=n/10;
    }
}
void countDigits(int n){
    int c=0;
    while(n!=0){
        int digit=n%10;
        c++;
        n=n/10;
    }
    cout<<c<<endl;
}
void sumDigits(int n){
    int sum=0;
    while(n!=0){
        int digit=n%10;
        sum+=digit;
        n=n/10;
    }
    cout<<sum<<endl;
}
int main(){
    int n=3456;
    printDigits(n);
    countDigits(n);
    sumDigits(n);
    return 0;
}