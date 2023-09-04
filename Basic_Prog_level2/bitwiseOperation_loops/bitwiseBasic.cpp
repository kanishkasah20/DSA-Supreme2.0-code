#include<iostream>
using namespace std;

int main(){
    int a=5;
    int b=10;
 
    //bitwise operator &,|,~,^
    cout<<(a|b)<<endl;
    cout<<(5^-5)<<endl;

    // int num=1;
    bool num=1; //why -2 ans becoz 8 bit hota h bools m same 2's compliment 
    cout<<~num<<endl;

    //left shift operator (multipy with 2)
    int A=7;
    int ans=(A<<1);
    ans=(A<<2);
    cout<<ans<<endl;

     //right shift operator(divide by 2)
    int m=5;
    int answer=(m>>1);
    // ans=(A<<2);
    cout<<answer<<endl;

// in unsigned int during right shift will give large +ve value
    unsigned int n= -100;
    int anss=(n>>1);
    // cout<<anss<<endl;
    cout<<(n>>1)<<endl;

// in signed int during right shift will give value/2 , handled by complier also
    signed int k= -100;
    int Ans=(k>>1);
    cout<<Ans<<endl;
    // cout<<(k<< -1)<<endl;
}