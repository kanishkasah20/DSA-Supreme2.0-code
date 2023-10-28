#include<iostream>
using namespace std;

int main(){
    int a=21;
    cout<<++a<<endl;
    cout<<a++<<endl;
    cout<<a<<endl;

    cout<<(a++)*10<<endl;
    cout<<(++a)*10<<endl;

    int n=10;
    cout<<((++n) * (n++))<<endl;
    cout<<((n++) * (++n))<<endl;

    return 0;
}