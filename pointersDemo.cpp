#include<iostream>
using namespace std;
// int main(){
//     int a=10;
//     int* ptr=&a;
//     int &b = a;
//     cout<<a<<" ";
//     cout<<b<<" ";
//     cout<<&b<<" "<<&a<<" ";
//     cout<<*ptr<<" ";
//     return 0;
// }

// pass by reference (alias)
// void changeA(int &b){
//     b=20;
// }
// int main(){
//     int a=10;
//     changeA(a);
//     cout<<a;
// }

// pass by pointer
// void changeA(int* b){
//     *b=20;
// }
// int main(){
//     int a=10;
//     changeA(&a);
//     cout<<a;
// }

int main(){
    int arr[] = {1,2,3};
    cout<<arr<<" ";
    cout<<&arr[0]<<" ";
    cout<<*arr<<" ";
    return 0;
}