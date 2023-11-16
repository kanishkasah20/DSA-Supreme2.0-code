#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextSmallerElement(int *arr, int size, vector<int> &ans){
    stack<int> st;
    st.push(-1);

    for(int i=size-1 ; i>=0; i--){
        int curr = arr[i];
        //answer find karo curr k liye
        while(st.top() >= curr){
            st.pop();
        }
        ans[i]= st.top();
        st.push(curr);

    }
    return ans;
}
vector<int> prevSmallerElement(int *arr, int size, vector<int> &ans){
    stack<int> st;
    st.push(-1);

    for(int i=0 ; i<size; i--){
        int curr = arr[i];
        //answer find karo curr k liye
        while(st.top() >= curr){
            st.pop();
        }
        ans[i]= st.top();
        st.push(curr);

    }
    return ans;
}

int main(){
    int arr[5]={8, 4, 6,2, 3};
    int size = 5;
    vector<int> next

}
