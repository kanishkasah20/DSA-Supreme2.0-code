#include <iostream>
using namespace std;

class Node{
    public:
      int data;
      Node* next;

      Node(){
        //default constructor
        cout<<"Hello constructor"<<endl;
        this->next = NULL;
      }
      Node(int data){
        //parameterrised constructor
        this->data = data;
        this->next = NULL;
      }
};

void printLL(Node* head){
  Node* temp= head;
  while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
  } 
  cout<<endl;
}

int findLength(Node* &head ) {
        int len = 0;
        Node* temp = head;
        while(temp != NULL) {
                temp = temp->next;
                len++;
        }
        return len;
}

int main(){

    //creation of Node
    // Node a; //static object is created
    // Node* head = new Node(); //dynamic object

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* five = new Node(50);

    first->next= second;
    second->next=third;
    third->next=fourth;
    fourth->next=five;
    //linked list is created

    Node* head= first;
    printLL(head);

    cout<<"Length of LL is: "<<findLength(head);



    return 0;
}