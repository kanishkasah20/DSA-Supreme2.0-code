#include<iostream>
using namespace std;

int binarySearch(int arr[],int n, int target){
    int start=0;
    int end=n-1;
    //some flaw in this mid, HW?
    int mid=(start+end)/2;

    while(start<=end){
        //found
        if(arr[mid]==target){
            return mid;
        }
        else if(target>arr[mid]){
            start=mid+1;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
        
        //mid update
        mid=(start+end)/2;

    }
    //agar nhi mila toh value return -1
    return -1;

}

//find first occurence of a numbers in a sorted array
int findFirstOccurence(int arr[],int n, int target){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans=-1;

    while(s<=e){
        if(arr[mid]==target){
            ans=mid;
            //left m jao
            e=mid-1;
        }
        else if(target>arr[mid]){
            s=mid+1;
        }
        else if(target<arr[mid]){
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

//find last occurence of a numbers in a sorted array
int findlastOccurence(int arr[],int n, int target){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans=-1;

    while(s<=e){
        if(arr[mid]==target){
            ans=mid;
            //right m jao
            s=mid+1;
        }
        else if(target>arr[mid]){
            s=mid+1;
        }
        else if(target<arr[mid]){
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

// int totalOccurence(int arr[], int n, int target){
//     int s=0;
//     int e=n-1;
//     int mid=(s+e)/2;
//     int ans=-1;

//     return total;
// }

int finddMissingElemnt(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        int diff=arr[mid]-mid;
        if(diff==1){
            //right side jao
            s=mid+1;
        }
        else{
            //ans store
            ans=mid;
            //left me jao
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }

    //hw ->
    if(ans==0){
        return n+1;
    }

    return ans+1;
}

int main(){

    // int arr[]={1,2,3,4,6,7,8};
    // int n=8;

    // int element=finddMissingElemnt(arr,n);
    // cout<<element<<endl;

    int arr[]={10,20,30,30,40,50,60};
    int size=7;
    int target=30;

    // int ans= findFirstOccurence(arr,size,target);
    // int ans= findlastOccurence(arr,size,target);
    
    // if(ans==-1){
    //     cout<<"element not found"<<endl;
    // }
    // else{
    //     cout<<"element found "<<ans<<endl;
    // }

    // int ansIndex= binarySearch(arr,size,target);
    
    // if(ansIndex==-1){
    //     cout<<"element not found"<<endl;
    // }
    // else{
    //     cout<<"element found "<<endl;
    // }

    // return 0;

}