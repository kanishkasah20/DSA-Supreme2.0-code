#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reserveQueue(queue<int> &q){
    stack<int> s;

    //one by one queue se elemnet lo and stack me daalo
    while(!q.empty()){
        int frontElement = q.front();
        q.pop();

        s.push(frontElement);
    }

    //one by one stack se elemnet lo and queue me daalo
    while(!s.empty()){
        int Element = s.top();
        s.pop();

        q.push(Element);
    }

}

 //by recursion
 void reverse(queue<int> &q){
    //base case
    if(q.empty()){
        return;
    }

    int element = q.front();
    q.pop();

    reverse(q);

    q.push(element);
 }

int main(){
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);


    // reserveQueue(q);
    reverse(q);

    cout<<"Printing Queue: "<<endl;
    while(!q.empty()){
        int element = q.front();
        q.pop();
        cout << element << " ";
    }

    // return 0;
}