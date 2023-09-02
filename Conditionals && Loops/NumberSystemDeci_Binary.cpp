#include<iostream>
#include<cmath>
using namespace std;

int DecimalToBinaryMethod1(int n){
    //Division method
    int i=0;
    int binaryNo = 0;
    while(n>0){
        int bit= n%2;
        binaryNo= bit*pow(10, i++) + binaryNo;
        n=n/2;
    }
    return binaryNo;
}

int DecimalToBinaryMethod2(int n){
    ///bitwise method
    int binaryno =0; //binaryno=0 h 
    int i=0;
    while(n>0){
        int bit= (n & 1);
        binaryno = (bit * pow(10, i)) + binaryno;
        n = n >> 1;
        i++;
    }
    return binaryno;
}

int main(){
    int n;
    cin>>n;
    int binary = DecimalToBinaryMethod2(n);
    cout<<binary+1<<endl; //+1 kuki ans glt aa raha h
}