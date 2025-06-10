// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cout<<"Enter the size of the square pattern: ";
// //     cin>>n;
// //     char ch = 'A';
// //     for(int i=0;i<n;i++){
// //         for(int j=0;j<i+1;j++){
// //             cout<<ch<<" ";
// //         }
// //         ch++;
// //         cout<<endl;
// //     }
// //     return 0;
// // }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of the square pattern: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<j+1<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of the square pattern: ";
//     cin>>n;
//     char ch = 'A';
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<ch<<" ";
//         }
//         ch++;
//         cout<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of the square pattern: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<i+1-j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of the square pattern: ";
//     cin>>n;
//     char ch = 'A';
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<ch<<" ";
//         }
//         ch++;
//         cout<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of the square pattern: ";
//     cin>>n;
//     int num = 1; 
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of the square pattern: ";
//     cin>>n;
//     char num = 'A';
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<num<<" ";
//             num++;
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
        for(char ch='A' + i; ch>='A'; ch--){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}