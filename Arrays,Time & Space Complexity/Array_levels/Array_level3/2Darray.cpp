#include <iostream>
using namespace std;

// printing 2d array
void printArray(int drr[][3], int row, int col)
{
    // row wise access
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << drr[i][j] << " ";
        }
        cout << endl;
    }
    // col wise access
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << drr[j][i] << " ";
        }
        cout << endl;
    }
}

// Q) find target element
bool findtarget(int arr[][4], int row, int col, int target)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                // if found return true
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][4] = {
        {1, 66, 41, 12},
        {11, 33, 31, 2},
        {2, 4, 3, 3}};
    int row = 3;
    int col = 4;

    int target = 31;
    cout << "found or not:" << findtarget(arr, row, col, target) << endl;

    /*
    //---input (row wise)---
    int arr[3][3];
    int row=3;
    int col=3;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter the input for row index"<<i<<" "<<"and col index"<<j<<endl;
            cin>>arr[i][j];
        }
    }
    */

    //---initialize 2d array---
    // int drr[2][3]={
    //     {1,2,3},
    //     {3,5,4}
    // };

    // int row=2;
    // int col=3;
    //  printArray(drr,row,col);

    return 0;
}
