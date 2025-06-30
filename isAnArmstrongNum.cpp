#include<iostream>
using namespace std;
bool isArmstrong(int n){
    int copyN=n;
    int sumOfCubes=0;
    while(n!=0){
        int dig=n%10;
        sumOfCubes+=(dig*dig*dig);
        n=n/10;
    }
    return sumOfCubes==copyN;
}
int main(){
    int n=1537;
    if(isArmstrong(n)){
        cout<<n<<" is an armstrong number"<<endl;
    }
    else{
        cout<<n<<" is not an armstrong number"<<endl;
    }
    return 0;
}