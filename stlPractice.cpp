// #include<iostream>
// using namespace std;

// VECTORS
// #include<vector>
// int main(){
    // vector<int>vec = {1,2,3,4,5};
    // vector<int>vec1(3,10);
    // vector<int>vec2(vec);
    // vec.push_back(6);
    // cout<<vec.size()<<" "<<vec.capacity()<<endl;
    // vec.push_back(7);
    // cout<<vec.size()<<" "<<vec.capacity()<<endl;
    // vec.pop_back();
    // cout<<vec.size()<<" "<<vec.capacity()<<endl;
    // vec.emplace_back(8);
    // vec.push_back(9);
    // vec.push_back(11);
    // vec.push_back(67);
    // vec.push_back(69);
    // cout<<vec.size()<<" "<<vec.capacity()<<endl;
    // cout<<vec.at(4)<<endl;
    // cout<<vec[5]<<endl;
    // vec.erase(vec.begin(),vec.begin()+5);
    // vec.insert(vec.begin()+3,578);
    // // vec.clear();
    // cout<<vec.empty()<<endl;
    // cout<<*(vec.begin())<<endl;
    // cout<<*(vec.rbegin())<<endl;
    // cout<<*(vec.end())<<endl;
    // cout<<*(vec.rend())<<endl;
    // for(int i: vec){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // for(int i: vec1){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // for(int i: vec2){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // cout<<vec.front()<<" "<<vec.back()<<endl;
    // vector<int>nums={1,2,3,4,5,6};
    // vector<int>::iterator it;
    // for(auto it=nums.begin();it!=nums.end();it++){
    //     cout<<*(it)<<endl;
    // }
    // vector<int>::reverse_iterator it;
    // for(auto it=nums.rbegin();it!=nums.rend();it++){
    //     cout<<*(it)<<endl;
    // }
//     return 0;
// }

// LIST(DOUBLY LINKED LIST)
// #include<list>
// int main(){
//     list<int>li={1,2,3,4,5};
//     li.push_back(9);
//     li.push_front(0);
//     li.push_back(24);
//     li.push_front(56);
//     li.push_front(88);
//     li.pop_back();
//     li.pop_front();
//     li.erase(li.begin());
//     li.clear();
//     li.insert(li.begin(),567);
//     for(int i: li){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     cout<<li.size()<<" ";
//     return 0;
// }

// DEQUE
// #include<deque>
// int main(){
//     deque<int>li={1,2,3};
//     li.push_back(9);
//     li.push_front(0);
//     li.push_back(24);
//     li.push_front(56);
//     li.push_front(88);
//     li.pop_back();
//     li.pop_front();
//     li.erase(li.begin());
//     // li.clear();
//     li.insert(li.begin()+5,567);
//     for(int i: li){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     cout<<li.size()<<endl;
//     cout<<li[4]<<endl;
//     return 0;
// }

// PAIR
// #include<vector> //dealing with vectors
// int main(){
//     pair<int,int>p={1,2};
//     cout<<p.first<<" "<<p.second<<endl;
//     pair<int,pair<int,char>>p1={1,{2,'a'}};
//     cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
//     vector<pair<int,int>>vec = {{1,2},{2,3},{3,4},{4,5}};   
//     vec.push_back({5,6}); //Difference between push_back and emplace_back
//     vec.emplace_back(7,8);
//     for(auto i: vec){//in place auto we can write pair<int,int>
//         cout<<i.first<<" "<<i.second<<endl;
//     }
//     return 0;
// }

// STACK
// #include<stack>
// int main(){
//     stack<int>s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
    // while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    // cout<<endl;
    // stack<int>s2;
//     s2.swap(s);
//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     while(!s2.empty()){
//         cout<<s2.top()<<" ";
//         s2.pop();
//     }
//     return 0;
// }

// QUEUE
// #include<queue>
// int main(){
//     queue<int>q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
//     cout<<endl;
// }

// PRIORITY QUEUE
// #include<queue>
// int main(){
//     priority_queue<int>q;
//     q.push(2);
//     q.push(5);
//     q.push(1);
//     q.push(0);
//     while(!q.empty()){
//         cout<<q.top()<<" ";
//         q.pop();
//     }
//     cout<<endl;
//     return 0;
// }

// MAP
// #include<map>
// int main(){
//     map<string,int>m;
//     m["tv"]=100;
//     m["laptop"]=50;
//     m.insert({"headphones",35});
//     m.emplace("camera",56);
//     m.emplace("camera",345);
//     cout<<m["camera"]<<endl;
//     m.erase("tv");
//     for(auto p: m){
//         cout<<p.first<<" "<<p.second<<endl;
//     }
//     cout<<m.count("laptop")<<" "<<m["laptop"]<<endl;
//     if(m.find("camera")!=m.end()){
//         cout<<"Found\n";
//     }
//     else{
//         cout<<"Not Found\n";
//     }
//     return 0;
// }

// MULTIMAP
// #include<map>
// int main(){
//     multimap<string,int>m;
//     m.emplace("tv",100);
//     m.emplace("tv",78);
//     m.emplace("tv",24);
//     m.erase(m.find("tv"));
//     m.erase("tv");
//     for(auto p: m){
//         cout<<p.first<<" "<<p.second<<endl;
//     }
//     return 0;
// }

// UNORDERED MAP
// #include<unordered_map>
// int main(){
//     unordered_map<string,int>m;
//     m.emplace("tv",23);
//     m.emplace("camera",67);
//     m.emplace("laptop",89);
//     m.emplace("tv",34);
//     for(auto p:m){
//         cout<<p.first<<" "<<p.second<<endl;
//     }
//     return 0;
// }

// SET
// #include<set>
// int main(){
//     set<int>s;
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.insert(5);
//     s.insert(5);
//     s.insert(2);
//     s.insert(7);
//     for(auto i:s){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     // lower_bound("x") should not be less than key;
//     // upper_bound("x") should be greater than key
//     cout<<*(s.lower_bound(6))<<endl;
//     cout<<*(s.upper_bound(6))<<endl;
//     cout<<*(s.lower_bound(5))<<endl;
//     cout<<*(s.upper_bound(3))<<endl;
//     return 0;
// }

// MULTISET
// #include<set>
// int main(){
//     multiset<int>s;
    // s.insert(1);
    // s.insert(1);
    // s.insert(1);
    // s.insert(3);
    // s.insert(2);
    // s.insert(3);
    // s.insert(2);
    // for(auto i:s){
    //     cout<<i<<" ";
    // }
    // return 0;
// }

// UNORDERED_SET
// #include<unordered_set>
// int main(){
//     unordered_set<int>s;
//     s.insert(1);
//     s.insert(1);
//     s.insert(1);
//     s.insert(3);
//     s.insert(2);
//     s.insert(3);
//     s.insert(2);
//     for(auto i:s){
//         cout<<i<<" ";
//     }
//     return 0;
// }

// ALGORITHMS
// #include<algorithm>
// #include<vector>

// SORTING
// bool comparator(pair<int,int>p1,pair<int,int>p2){
//     if(p1.second<p2.second) return true;
//     else if(p1.second>p2.second) return false;
//     if(p1.first<p2.first) return true;
//     else return false;
// }
// int main(){
//     int arr[5]={4,3,6,2,1};
//     sort(arr,arr+5);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     sort(arr,arr+5,greater<int>());
//     for(int i:arr){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     vector<int>vec={3,5,42,12,54,8};
//     sort(vec.begin(),vec.end(),greater<int>());
//     for(int val: vec){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     vector<pair<int,int>>v={{5,2},{2,3},{1,6},{6,2},{7,0}};
//     // sort(v.begin(),v.end());
//     sort(v.begin(),v.end(),comparator);
//     for(auto p:v){
//         cout<<p.first<<" "<<p.second<<endl;
//     }
//     cout<<endl;
//     return 0
// }

// REVERSE
// int main(){
//     vector<int>vec={1,2,3,4,5};
//     reverse(vec.begin(),vec.end());
//     reverse(vec.begin(),vec.begin()+3);
//     for(auto i: vec){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// NEXT PERMUTATION AND PREV PERMUTATION
// int main(){
    // vector<int>vec={1,2,3,4};
    // next_permutation(vec.begin(),vec.end());
    // prev_permutation(vec.begin(),vec.end());
    // for(auto i: vec){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // string s="abc";
    // next_permutation(s.begin(),s.end());
    // prev_permutation(s.begin(),s.end());
    // cout<<s<<endl;
    // return 0;
// }

// SWAP, MIN, MAX
// int main(){
//     cout<<max(4,5)<<" "<<min(4,5)<<endl;
//     int a=5,b=10;
//     swap(a,b);
//     cout<<a<<" "<<b<<endl;
//     return 0;
// }

// MAX AND MIN ELEMENT
// int main(){
//     vector<int>vec={1,2,34,5,6,674};
//     cout<<*(max_element(vec.begin(),vec.end()))<<endl;
//     cout<<*(min_element(vec.begin(),vec.end()))<<endl;
//     return 0;
// }

// BINARY SEARCH
// int main(){
//     vector<int>vec={1,2,3,4,56,89};
//     cout<<binary_search(vec.begin(),vec.end(),56)<<endl;
//     cout<<binary_search(vec.begin(),vec.end(),253)<<endl;
//     return 0;
// }

// COUNT SET BITS
// int main(){
//     int n=5;
//     long int x=45;
//     long long int y=567;
//     cout<<__builtin_popcount(n)<<endl;
//     cout<<__builtin_popcountl(x)<<endl;
//     cout<<__builtin_popcountll(y)<<endl;
//     return 0;
// }