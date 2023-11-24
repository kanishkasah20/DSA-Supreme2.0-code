#include<iostream>
// #include<queue>
using namespace std;

class Queue{
    public:
     int *arr;
     int size;
     int front;
     int rear;

     Queue(int size){
        arr = new int[size];
        this->size =size;
        front= -1;
        rear = -1;
     }

     void push(int val){
        //check full
        if(rear== size-1){
            cout<<"Queue overflow"<<endl;
            return;
        }
        else if(front==-1 && rear==-1){
            //empty case
            front++;
            rear++;
            arr[rear]= val;
        }
        else{
            //normal case
            rear++;
            arr[rear]=val;
        }
     }
     void pop(){
        //underflow
        if(front==-1 && rear==-1){
            cout<<"Queue underflow"<<endl;
            return;
        }
        else if(front==rear){
            //empty case -> single element
            arr[front]= -1;
            front=-1;
            rear=-1;
        }
        else{
            //normal case
            arr[front]=-1;
            front++;
        }
     }

     bool isEmpty(){
        if(front==-1 && rear==-1){
            return true;
        }
        else{
            return false;
        }
     }

     int getSize(){
        //bhul jata hu (empty case of getSize)
        if(front==-1 && rear==-1){
            return 0;
        }
        else{
            return rear-front+1;
        }
     }

     int getFront(){
        if(front==-1){
            cout<<"No element in queue, cannot give from queue"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
     }

     int getRear(){
        if(rear== size-1){
            cout<<"Queue is full with element, cannot insert more element in queue"<<endl;
            return -1;
        }
        else{
            return arr[rear];
        }
     }

     void print(){
        cout<<"Printing Queue: ";
        for(int i=0;i<size;i++){
             cout<<arr[i]<<" ";
        }
        cout<<endl;
     }
};

int main(){
    //creation
    Queue q(5);
    q.print();

    q.push(10);
    q.print();

    q.push(20);
    q.print();

    q.push(30);
    q.print();

    q.push(40);
    q.print();

    q.push(50);
    q.print();

    q.pop();
    q.print();

    cout<<"Size of Queue: "<<q.getSize()<<endl;
    cout<<"Queue is empty or not: "<<q.isEmpty()<<endl;

    q.push(11);
    q.print(); 

    // q.pop();
    // q.pop();
    // q.pop();
    // q.pop();
    q.print();
    cout<<q.getFront()<<endl;
    cout<<q.getSize()<<endl;
    cout<<q.getRear()<<endl;

    cout<<endl;
    return 0;
}

