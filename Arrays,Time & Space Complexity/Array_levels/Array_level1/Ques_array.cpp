#include<iostream>
#include<limits.h>

using namespace std;

//Q)Count 0's and 1's in an array
void countZeroOne(int arr[],int size){
    int zeroCount=0;
    int OneCount=0;

    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zeroCount++;
        }
        if(arr[i]==1){
            OneCount++;
        }
    }

    cout<<"ZeroCount: "<<zeroCount<<endl;
    cout<<"OnesCount:" <<OneCount<<endl;
}

int main(){
    int arr[10]={1,0,1,1,1,0,1,0,0,1};
    int size=10;

    countZeroOne(arr,size);

    cout<<INT_MAX<<endl;
    cout<<INT_MIN<<endl;
}