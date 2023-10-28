/*
Pattern
1
23
345
4567
*/
#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    // int i=1;
    // while(i<=n){
    //     int j = i,count = 1;
    //     while(count<=i){
    //         cout<<j;
    //         j = j + 1;
    //         count = count + 1;
    //     }
    //     cout<<"\n";
    //     i = i + 1;
    // }

    for(int i=1;i<=n;i++){
        int count=1;
        for(int j=i;count<=i;j++){
            cout<<j;
            count=count+1;
            // j=j+1;
        }cout<<endl;

    }
}