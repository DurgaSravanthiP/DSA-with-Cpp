// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of the square pattern: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for( int j=0;j<n-i;j++){
//             cout<<i+1;
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
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        char ch = 'A'+i;
        for( int j=0;j<n-i;j++){
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}