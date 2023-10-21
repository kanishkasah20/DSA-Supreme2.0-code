#include<iostream>
#include<vector>
using namespace std;


void solve(int arr[], int size , int index,vector<int> &ans){

    //base case
    if(index>=size){
        return;
    }
    //preprocessing
    // if(arr[index]%2==0){
    //     //even
    //     ans.push_back(arr[index]);
    // }

    // finding double of array element
    if(index<=size){
        //even
        ans.push_back(arr[index]*2);
    }
    //recursive call
    solve(arr,size, index+1, ans);

}
int main(){
    int arr[5]={10,11,12,13,14};
    int size=5;
    int index=0;
    vector<int> ans;

    solve(arr, size,index+1,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;

    }
}