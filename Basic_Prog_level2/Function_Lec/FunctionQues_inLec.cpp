#include<iostream>
using namespace std;

// void printMaximum(int num1, int num2, int num3){
//     if(num1>num2 && num1>num3) {
//         cout<<"MAximum is: "<<num1<<endl;

//     }
//     else if(num2>num1 && num2>num3) {
//         cout<<"MAximum is: "<<num2<<endl;

//     }
//     else {
//         cout<<"MAximum is: "<<num3<<endl;

//     }

// }

//Q1) find max of 3
void printMaximum(int n1, int n2,int n3){
    int ans1 = max(n1,n2);
    int finalans=max(n2,n3);
    cout<<finalans<<endl;
}

//Q2.)counting from 1toN
void printCounting(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
}

// Q3)check even odd
void checkEvenOdd(int num){
    if(num%2==0){
        cout<<"even"<<endl;
    }
}

// Q4)
void findSumUptoN(int n){
    int sum=0;

    for(int i=1;i<=n;i++){
        sum=sum+i; //sum+=i
        
    }
    cout<<sum<<endl;
}

// Q5)
void findSumEvenUptoN(int n){
    int sum=0;

    for(int i=2;i<=n;i=i+2){
        sum=sum+i; //sum+=i
        
    }
    cout<<sum<<endl;
}

// Q6)
//return true-> if N is a prime no.
//return false-> if N is not a prime no.

bool checkPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i ==0){
            //remainder 0-> perfectly divisible so not a prime no.
            return false;
        }
    }
//yaha pe khe skte h ki 
//k [2,3,4,5,---n-1], koi bhi N ko perfectly divisible nhi kra toh prime
    return true;
}
int main(){
     
    bool prime=checkPrime(13); //Q6
    if(prime){
        cout<<" prime"<<endl;
    }
    else{
        cout<<"not a prime"<<endl;
    }
//-----
    findSumEvenUptoN(10);
    findSumUptoN(10);
    printCounting(10); //Q2
    printMaximum(3,1,3);//Q1

    return 0;
}