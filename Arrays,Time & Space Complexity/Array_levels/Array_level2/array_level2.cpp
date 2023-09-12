#include <iostream>
using namespace std;

void solve(int arr[], int size)
{
    arr[0] = 100;

    // value will be change and o/p -> 100 2 4
    // because
}

// Q1)find unique elemnet
int getUnique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

// Q5)shift array element by 1
void shiftArray(int arr[], int n)
{
    // step1
    int temp = arr[n - 1];

    // step2
    // shift-> arr[i]=arr[i-1]
    for (int i = n - 1; i >= 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    // step3
    arr[0] = temp;
    // cout<<arr[];
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;

    shiftArray(arr, n);

    // print
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    /*

    //Q2)print pair
        int arr[]={10,20,30};
        int m=3;

        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                cout<<arr[i]<<", "<<arr[j]<<endl;
            }
        }
        */

    /*
    //Q3)print all the triplets
        int arr[]={10,20,30};
        int m=3;

        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                for(int k=0;k<m;k++){
                cout<<arr[i]<<", "<<arr[j]<<", "<<arr[k]<<endl;
            }
        }
        }
     */

    /*
    //Q1)find unique element
        // int arr[]={2,10,11,10,2,13,15,13,15};
        int n=9;

        int finalAns=getUnique(arr,n);
        cout<<"unique element is:" <<finalAns<<endl;
        */

    // int arr[]={1,2,4};
    // int size=3;

    // solve(arr, size);

    // //printing th array
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }

    // refernce variable
    //     int a=5;
    //     cout<<a<<endl;
    //  // cout<<&a<<endl;

    //     int& b=a;
    //     cout<<b<<endl;
}
