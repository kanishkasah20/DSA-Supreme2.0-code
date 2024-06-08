// ----GFG Question
// https://www.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int fractionalKnapsack(vector<int> val , vector<int> wt , int n , int capacity){
    vector<float> valWtRatio;
    for(int i=0; i<n; i++){
        float ratio = (val[i] * 1.0) / wt[i];
        valWtRatio.push_back(ratio);
    }

    priority_queue<pair<float,pair<int,int> > > maxi;
    for(int i =0 ; i<n ;i++){
        maxi.push({valWtRatio[i], {val[i], wt[i]}});
    }
    // max heap is ready
    int totalVal = 0;
    while(capacity != 0 && !maxi.empty() ){
        auto front = maxi.top();
        float ratio = front.first;
        int value = front.second.first;
        int weight = front.second.second;
        maxi.pop(); 

        // logic lagay ki ab top pe jo bhi element mil raha h ya toh m usee fully insert karu
        // ya fractional insert kru

        // Full insert hoga
        if(capacity >=weight){
            totalVal += value;
            capacity = capacity - weight;
        } 
        else{
            // fractional insert hoga
            int valueToInclude = ratio * capacity;
            totalVal += valueToInclude;
            capacity = 0;
            break;
        }
    }
    return totalVal;

}

int main(){
    vector<int> val= {60,100,120};
    vector<int> wt = {10,20,30};
    int n = 3;
    int W = 50; //W->capacity
    
    int ans = fractionalKnapsack(val,wt,n,W);
    cout << "Final Ans: " << ans <<endl;
}
