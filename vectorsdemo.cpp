#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec = {1,2,3};
    cout<<vec[2]<<endl;
    vector<int>vect(5,0);
    cout<<vect[3]<<endl;
    for(int i:vect){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<char>vectCh = {'a','b','c','d'};
    vectCh.push_back('u');
    vectCh.push_back('s');
    vectCh.push_back('t');
    vectCh.pop_back();
    for(char i:vectCh){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size of vectCh is "<<vectCh.size()<<endl;
    cout<<vectCh.front()<<endl;
    cout<<vectCh.back()<<endl;
    cout<<vectCh.at(3)<<endl;
    cout<<vectCh.size()<<endl;
    cout<<vectCh.capacity()<<endl;
    return 0;
}