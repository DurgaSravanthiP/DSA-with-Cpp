#include<iostream>
using namespace std;
bool isPowerOf2(int n){
    bool t = (n>0) && ((n & (n-1)) == 0);
    return t;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    if(isPowerOf2(n)){
        cout<<n<<" is power of 2"<<endl;
    }
    else{
        cout<<n<<" is not power of 2"<<endl;
    }
    return 0;
} 