#include<iostream>
using namespace std;


void printName(string name){
    for(int i=0;i<5;i++){
        cout<<name<<endl;
    }
}

//function define
void printLine(){
    for(int i=0;i<10;i++){
       cout<<"HEllo Duniya walo"<<endl;
    }
}

//function declartion
void printLine();

//example
void printA(){
    cout<<"Im in A"<<endl;
}


int main(){

    // string name;

    printName("sweety");
    printName("Kanishka");

    //function call
    printLine();

    //exp continue
    cout<<"Hi"<<endl;
    printA();
    return 0;
}