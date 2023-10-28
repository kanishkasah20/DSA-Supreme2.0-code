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

//minimum no. in an array
int findMinimumInArray(int arr[],int size){
    //ans store variable
    int minAns = INT_MAX;

    for(int i=0;i<size;i++){
        if(arr[i]<minAns){
            minAns= arr[i];
        }
    }
    return minAns;
}


//Q)reverse an array:-
void reverseArray(int arr[], int size){
    int left=0;
    int right=size-1;

    while(left<=right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }

    // for(int left=0;right=size-1; left<=right ;left++;right--){
    //     swap(arr[left],arr[right]);
    // }
    
//printing the reverse array
 for (int i = 0; i < size; i++)
 {
    cout<<arr[i]<<" ";
 }cout<<endl;
}



//Q)Extreme print in an array
// 60 10 50 20 40 30
void ExtremePrintArray(int arr[], int size){
    int left=0;
    int right= size-1;

    while(left<=right){
        if(left==right){
            cout<<arr[left]<<endl;
        }
        else{
        cout<<arr[left]<<" ";
        cout<<arr[right]<<" ";
        }
        left++;
        right--;
    }
}


int main(){

    int arr[6]={10,20,30,40,50,60};
    int size=6;

    reverseArray(arr,size);
    ExtremePrintArray(arr,size);
    
/*
//Q)minimum no. in an array
    int arr[]={10,4,33,66,45,-12,1,65,22};
    int size=9;

    int minimum=findMinimumInArray(arr,size);
    cout<<"Minimum no is "<<minimum<<endl;  

*/ 

/*
    //Count 0's and 1's in an array
    int arr[10]={1,0,1,1,1,0,1,0,0,1};
    int size=10;

    countZeroOne(arr,size);

    */

    //-2 to the power 31
    cout<<INT_MIN<<endl;
    //2 to the power 31 -1
    cout<<INT_MAX<<endl;
}