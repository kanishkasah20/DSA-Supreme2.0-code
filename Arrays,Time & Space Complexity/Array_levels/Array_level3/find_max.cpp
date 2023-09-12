#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

int findMAx(int arr[][4], int row, int col)
{
    int maxAns = INT_MIN;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > maxAns)
            {
                maxAns = arr[i][j];
            }
        }
    }
    return maxAns;
}

int findMin(int arr[][4], int row, int col)
{
    int minAns = INT_MAX;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < minAns)
            {
                minAns = arr[i][j];
            }
        }
    }
    return minAns;
}

// row wise sum
void RowWiseSum(int arr[][4], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}
// col wise sum
void ColWiseSum(int arr[][4], int row, int col)
{

    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << sum << endl;
    }
}
// printing 2d array
void printArray(int arr[][4], int row, int col)
{
    // row wise access
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
// transpose of a matrix (square matrix)
void transpose(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

int main()
{
    int arr[4][4] = {
        {1, 4, 2, 1},
        {2, 11, 7, 6},
        {33, 44, 21, 9},
        {3, 14, 25, 23}};

    int row = 4;
    int col = 4;

    cout << "Printing the max no." << findMAx(arr, row, col) << endl;
    cout << "Printing the min no." << findMin(arr, row, col) << endl;
    RowWiseSum(arr, row, col);
    ColWiseSum(arr, row, col);
    transpose(arr, row, col);
    printArray(arr, row, col);
    cout << endl;

    // 2D Array
    vector<vector<int>> arr(5, vector<int>(10, 0));
    // row size -> arr.size()
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    vector<vector<int>> brr;

    vector<int> vec1(10, 0);
    vector<int> vec2(5, 1);
    vector<int> vec3(7, 0);
    vector<int> vec4(8, 1);
    vector<int> vec5(20, 0);

    brr.push_back(vec1);
    brr.push_back(vec2);
    brr.push_back(vec3);
    brr.push_back(vec4);
    brr.push_back(vec5);

    for (int i = 0; i < brr.size(); i++)
    {
        for (int j = 0; j < brr[i].size(); j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}