// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of the square pattern: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the square pattern: ";
    cin>>n;
    char m = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<m<<" ";
            m++;
        }
        cout<<endl;
    }
    return 0;
}