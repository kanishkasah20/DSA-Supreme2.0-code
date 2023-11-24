#include<iostream>
using namespace std;

class Deque{
    public:
      int *arr;
      int size;
      int front;
      int rear;

      Deque(int size){
        arr= new int[size];
        this->size=size;
        front=-1;
        rear=-1;
      }

      void pushBack(int val){

        //Overflow
        //Empty case -> First element
        //circular nature
        //normal flow

        
        if((front == 0 && rear == size-1) || (rear == front-1)){ //iss line bhot glti krte h log
            cout<<"Overflow"<<endl;
        }
        
        else if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[rear]= val;
        }
        else if(rear==size-1 && front !=0){
            rear=0;
            arr[rear]=val;
        }
        else{
            rear++;
            arr[rear]=val;
        }

      }

      void pushFront(int val){
        if((front == 0 && rear == size-1) || (rear == front-1)){
            cout<<"Overflow"<<endl;
        }
        else if(front == -1 && rear==-1){
            front++;
            rear++;
            arr[front]=val;
        }
        else if(front==0 && rear != size-1){ //circular condition dequeue
            front = size-1;
            arr[front]=val;
        }
        else{
            //rear ke case m  rear ko peeche latte h , aur 
            //front ke case m front-- peeche late h phir value insert karte
            front--;
            arr[front]=val;
        } 
      }
      

      void popFront(){
         //Underflow
        //singleElemnt
        //circular nature
        //normal flow
        
        if(front ==-1 && rear==-1){
            cout<<"UnderFlow"<<endl;
        }
        else if(front==rear){
            arr[front]=-1;
            front= -1;
            rear = -1;
        }
        else if(front==size-1){ 
            arr[front]=-1;
            front=0;
        }
        else{
            arr[front]=-1;
            front++;
        }
      }

      void popBack(){

        //underflow
        //single element
        //normal flow

        if(front==-1 && rear==-1){
            cout<<"Queue underflow"<<endl;
            
        }
        else if(front==rear){
            //empty case -> single element
            arr[rear]= -1;
            front=-1;
            rear=-1;
        }
        else if(rear==0){ //circular condition dequeue
            arr[rear]=-1;
            rear = size-1; 
        }
        else{
            //normal case
            arr[rear]=-1;
            rear--;
        }



        
      }
};

int main(){

    return 0;
}