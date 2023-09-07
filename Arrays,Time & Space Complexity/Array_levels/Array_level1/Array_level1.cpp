#include<iostream>
using namespace std;


void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool linearSearch(int arr[],int size,int targett){
    for(int i=0;i<size;i++){
        if(arr[i]==targett){
            //found
            return true;
        }
    }
    //not found
    return false;
}
int main(){

    int arr[5]={2,4,6,8,10};
    int size=5;
    //function call
    printArray(arr, size);

    //---linearsearch continue
    int targett=10;

    bool ans=linearSearch(arr,size,targett);

    if(ans==1){
        cout<<"Target found"<<endl;
    }
    else{
        cout<<"target not found"<<endl;
    }


    //array creation
    //int arr[10];
    //char ch[102];
    //bool flags[223];
    // long num[90];
    //short snum[1000];

    //cout<<"Array created successfully"<<endl;

/*
    int a=5;
    cout<<"address of a: "<<&a<<endl;
    cout<<"size of a: "<<sizeof(a)<<endl;

    int arr[100];
    cout<<"Base address if Arr is: "<<&arr<<endl;
    cout<<"Base address if Arr is: "<<arr<<endl; //this will give same o/p as above statement because starting block of array has base address.
    cout<<"size of a: "<<sizeof(arr)<<endl;

//Array intialization
    int Arr[]={1,2,23,3,2};

    int brr[5]={2,4,4,6,8};

    int crr[5]={2,3};
    //error
    // int drr[2]={2,4,4,7,1};

    //access array elements through indexing
    cout<<brr[2]<<endl;

//printing an array
    int n=5;
    for(int i=0;i<n;i++){
        cout<<brr[i]<<endl;
    }

    */
/*

//taking input in an array
int arrr[5];
int m=5;
for(int i=0;i<m;i++){
    cout<<"Enter the value for index: "<<i<<endl;
    cin>>arrr[i];
    cout<<endl;
}

//printing arrr
cout<<"Printing the array"<<endl;

for(int i=0;i<m;i++){
        cout<<arrr[i];
    }

//Q)problem statement
int array[10];
int q=10;

for(int i=0;i<q;i++){
    cout<<"Enter the value for index: "<<i<<endl;
    cin>>array[i];
    cout<<endl;
}

//printing arrr
cout<<"Printing the array"<<endl;

for(int i=0;i<q;i++){
        cout<<array[i]<<" ";
    }cout<<endl;
cout<<"Printing the doubles of array"<<endl;

for(int i=0;i<q;i++){
        array[i]=2*array[i];
        cout<<array[i]<<" ";
    }

    */

 //Q) LINEAR search in array
 int ary[5]={2,4,6,8,10};
 int target=10;
 int k=5;

 bool flag=0;
 //0->not found
 //1->found

 for(int i=0;i<k;i++){
    if(ary[i]==target){
        //found
        flag=1;
        break;
    }
 }   

 if(flag==1){
    cout<<"target found";
 }
 else{
    cout<<"target not found"<<endl;
 }



    return 0;
}