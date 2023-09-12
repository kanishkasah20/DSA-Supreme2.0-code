#include <iostream>
using namespace std;

// Q4)sort o's and 1's

int sortZeroOne(int arr[], int n)
{
    int zerocount = 0;
    int onecount = 0;

    // stepA: count 0 and 1
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zerocount++;
        }
        if (arr[i] == 1)
        {
            onecount++;
        }
    }
    /*
     //step B: place all zeroes first
    int i;

    for(int i=0;i<zerocount;i++){
        arr[i]=0;
    }
    // step C: place all ones first
    for(int j=i;j<n;j++){
        arr[j]=1;
    }
    */

    //---Easy Way
    int index = 0;

    while (zerocount--)
    {
        arr[index] = 0;
        index++;
    }
    while (onecount--)
    {
        arr[index] = 1;
        index++;
    }
}

int main()
{
    // Q4)sort o's and 1's
    int arr[] = {1, 0, 0, 0, 1, 1, 0, 0, 0};
    int n = 9;

    sortZeroOne(arr, n);

    // print sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}