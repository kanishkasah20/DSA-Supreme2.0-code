//Debug the code. It is trying to print the given pattern.
/*
Pattern
N = 4
   *
  ***
 *****
*******
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<n){
        int j = 1,count = 2*n-1,gaps=(n-i),k=1;
        while(k<=gaps){
            cout<<" ";
            k = k + 1;
        }
        int m = 1,ch = count - 2*gaps;
        while(m<=ch){
            cout<<"*";
            m = m + 1;
        }
        k = 1;
        while(k<=gaps){
            cout<<" ";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
    }

    // for(int row=0;row<n;row++){
    //     //space
    //     for(int col=0;col<n-row-1;col++){
    //         cout<<" ";
    //     }
    //     //star
    //     for(int col=0;col<2*row+1;col++){
    //         cout<<"*";
    //     }cout<<endl;

    // }
}