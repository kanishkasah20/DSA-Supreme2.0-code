#include<iostream>
using namespace std;

bool checkSorted(int arr[], int size , int index){
    int s=0;
    int e=size;
    if(index>=size){
        return true;
    }
    if(arr[index]>arr[index-1]){
        //agee check krnge
        //by recursion
        bool ans = checkSorted(arr, size, index+1);
        return ans;
    }
    else{
        return false;
    }
}

int main(){
    int arr[]={10,20, 30, 40, 60 , 70};
    int size=5;
    int index=1;

    bool isSorted = checkSorted(arr,size, index);
    if(isSorted){
        cout<<"sorted";
    }
    else{
        cout<<"not sorted";
    }
}