#include<iostream>
using namespace std;

void FindMissing(int *a,int n){
    //visited method   TC-0(n),SC-0(1)
    for(int i=0;i<n;i++){
        int index= abs(a[i]);
        if(a[index-1] > 0){
            a[index-1] *= -1;
        }
    }

   //all positive indexes are missing
   for(int i=0;i<n;i++){
    if(a[i]>0)
      cout<<i+1<<" ";
   }
}
int main(){
    int n;
    int a[]={3,2,1,3,3};
    n=sizeof(a)/sizeof(int);
    FindMissing(a,n);
    return 0;


}

//method 2
void missingElementTwo(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        int index = arr[i] - 1;
        if (arr[i] != arr[index])
        {
            swap(arr[i], arr[index]);
        }
        else
        {
            i++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // now find the missing numbers;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
            cout << i + 1 << " ";
    }
}