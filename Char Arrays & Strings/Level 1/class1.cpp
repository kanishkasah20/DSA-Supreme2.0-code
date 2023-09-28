#include<iostream>
using namespace std;

int main(){

    //creation
    char ch[10];

    //input
    cin>>ch;

    //print
    cout<<"Printing the value of ch: "<<ch;

    //printing each element using loop
    for(int i=0;i<10;i++){
        cout<<"At Index: "<<i<<" "<<ch[i]<<endl;
    }

    char temp= ch[6];
    int value = (int)temp;
    cout<<value<<endl;

    return 0;

}