#include<iostream>
using namespace std;
int sumOfNnumbers(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int s = sumOfNnumbers(n);
    cout<<s<<endl;
    return 0;
}