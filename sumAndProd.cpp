#include<iostream>
using namespace std;
int sumOfArrEle(int a[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += a[i];
    }
    return sum;
}
int productOfArrEle(int a[],int n){
    int product = 1;
    for(int i=0;i<n;i++){
        product *= a[i];
    }
    return product;
}
int main(){
    int n = 5;
    int a[n] = {1,2,3,4,5};
    int sum = sumOfArrEle(a,n);
    int product = productOfArrEle(a,n);
    cout<<"Sum is: "<<sum<<endl;
    cout<<"Product is: "<<product<<endl;
    return 0;
}