#include<iostream>
using namespace std;

void DaigonalSum(int arr[][3],int row, int col){
    int sum=0;
    for(int i=0;i<row;i++){
            // sum=sum+arr[i][j];
            sum=sum+arr[i][row-i-1];
    }
    cout<<sum;
}
void transposeMAtrix(int arr[][3],int row, int col){
    for(int i=0;i<row;i++){
        for(int j=i;i<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}

void shiftNegativeelement(int arr[],int n){
    int j=0;
    for(int index=0;index<n;index++){
        if(arr[index]<0){
            swap(arr[index],arr[j]);
            j++;
        }
    }

}

int main(){
    // int arr[3][3]={
    //     {3,6,4},
    //     {2,3,5},
    //     {2,2,2}
    // };
    // int row=3;
    // int col=3;

    // // DaigonalSum(arr,row,col);
    // transposeMAtrix(arr,row, col);
    // cout<<endl;

    int arr[]={-3,4,2,-1,22,66};
    int n=6;

    shiftNegativeelement(arr,n);
    //printing
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //printing transpose matrix
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<arr[i][j]<<" ";
    //     }cout<<endl;
    // }


    // return 0;
}