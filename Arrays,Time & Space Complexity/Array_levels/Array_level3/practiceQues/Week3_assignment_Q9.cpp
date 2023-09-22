//Week3 ASSIGMENT
//Q9) MISSING ELEMNET FROM AN ARRAY WITH DUPLICATES
#include<iostream>
using namespace std;

//method1 - negative marking visted methos
void findMissing(int *a, int n){
    //visited method
    for(int i=0;i<n;i++){
        int index=abs(a[i]);
        if(a[index-1]>0){
            a[index-1]*= -1;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;

    //all positive indexes are missing
    for(int i=0;i<n;i++){
        if(a[i]>0){
            cout<<i+1<<" ";
        }
        
    }
}

//method 2 - Sorting and Swapping method
void SortSwapMEthod(int *a, int n){

int i=0;
while(i<n){
    int index =a[i]-1;
    if(a[i] != a[index]){
        swap(a[i],a[index]);
    }
    else{
        i++;
    }
}
//missing value 
for(int i=0;i<n;i++){
    if(a[i]!=i+1){
    cout<<i+1<<" ";
    }
}
cout<<endl;
}
int main(){
  int n;
  int a[]={1,3,5,3,4};
  n= sizeof(a)/sizeof(int);
//   findMissing(a,n);
  SortSwapMEthod(a,n);
  return 0;
}