#include<iostream>
using namespace std;
int main() {
    int m=9;
    for(int i=0; i<5; i++) {
        for(int i=0; i<m; i++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}