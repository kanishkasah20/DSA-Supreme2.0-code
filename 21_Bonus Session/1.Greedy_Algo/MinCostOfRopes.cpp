// GFG -- minimum-cost-of-ropes

#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int solve(int arr[], int n){
    priority_queue<int , vector<int> , greater<int> > minHeap;
    // insert all elemnets
    for(int i=0;i<n;i++){
        int val = arr[i];
        minHeap.push(val);
    }
    int cost = 0;
    while(minHeap.size() > 1){
        int a = minHeap.top();
        minHeap.pop();
        int b = minHeap.top();
        minHeap.pop();

        cost += a + b;
        int sum = a + b;
        minHeap.push(sum);
    }
    return cost;
}

int main(){
    int arr[]= {4,3,2,6};
    int size = 4;
    int ans = solve(arr,size);
    cout<<"final Ans: "<< ans <<endl;
}