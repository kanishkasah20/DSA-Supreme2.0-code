#include<iostream>
using namespace std;

int findOddOccuringElement(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        //single element
        if(s==e){
            return s;
        }

        //mid check-> even or odd
        if(mid&1){ //mid&1 -> true ->odd number
           if(mid-1>=0 && arr[mid-1]==arr[mid]){
              //right m jao
              s=mid+1;
            }
           else{
            //left m jao
            e=mid-1;
           }
        }
        else{
            //even
            if(mid+1<n && arr[mid]==arr[mid+1]){
                //right m jao
                s=mid+2;
            }
            else{
                //ya to main right part pr khada hu
                //ya toh main answer k upar khada hu
                //thaat's why e=mid kraa hu
                //kyoki e=mid-1; se ans lost ho skta h
                e=mid;
            }
        }
        mid=s+(e-s)/2;
    }
    return -1;
} 
int main(){
    int arr[]={10,10,2,2,3,3,2,5,5,6,6,7,7};
    int n=13;

    int ansIndex=findOddOccuringElement(arr,n);

    cout<<"final ans is "<<arr[ansIndex]<<endl;

}