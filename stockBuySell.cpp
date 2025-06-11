#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int stockBuySell(vector<int>&prices){
    int maxProfit = 0;
    int n = prices.size();
    int bestBuy = prices[0];
    for(int i=1;i<n;i++){
        if(prices[i]>bestBuy){
            maxProfit = max(maxProfit,prices[i]-bestBuy);
        }
        bestBuy = min(bestBuy,prices[i]);
    }
    return maxProfit;

}
int main(){
    vector<int>prices = {7,1,5,3,6,4};
    int maxProfit = stockBuySell(prices);
    cout<<maxProfit;
    return 0;
}