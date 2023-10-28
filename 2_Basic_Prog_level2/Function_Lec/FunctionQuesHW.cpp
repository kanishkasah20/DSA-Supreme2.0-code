#include<iostream>
using namespace std;

//Q1)find area of circle
void CircleArea(int radius){
    float area = 3.14*radius*radius;
    cout<<"Area of circle is "<<area<<endl;
}

//Q2)find factorial of a no.
int factorialOfNo(int n){
    int fact=1;
    while(n>=1){
        fact=fact*n;
        n--;
    }
    return fact;
}

// Q3)print all prime no. from 1 to N
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

//Q4)print all digits of an integer
void printDigitsOfInteger(int n){
    while(n>0){
        int onecounts=n%10;
        cout<<onecounts<<endl;;
        n=n/10;
    }
}

//Q5)create no. using digits
int createNumberUsingDigits(int n){
    int num=0;
    for(int i=0;i<n;i++){
        cout<<"enter digit:"<<endl;
        int digit;
        cin>>digit;
        num=num*10+digit;
        cout<<"number till now: "<<num<<endl;
    }
    return num;
}

//Q6)convert km to miles
float ConvertKmToMiles(int n){
     float _1km_miles=0.621371;
     float miles= n*_1km_miles;
     return miles;
}

//Q7)convert farenheit to celsius
float FarenheitToCelsius(float f){
    float celsius;
    celsius=((f-32)*5)/9;
    return celsius;
}

//Q8)count all set of bits
int setBitCoumt(int n){
    int count=0;
    while(n>0){
        int bit=n%2;
        if(bit==1){
        count++;
        }
       n=n/2;
    
    }

    return count;

}

//Q9)check even/odd using bitwise operator
void CheckEvenOddBitwise(int n){
    int bit = n&1;
    if(bit==0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
}


int main(){
    
    //Q1)find area of circle
    float rad;
    cin>>rad;
    CircleArea(rad);

    //Q2)find factorial of a no.
    int n;
    cin>>n;
    int ans=factorialOfNo(n);
    cout<<"Factorial of number is: " <<ans<<endl;

    // Q3)print all prime no. from 1 to N
    for(int i=2;i<n;i++){
     bool prime=checkPrime(i); //Q6
     if(prime){
        cout<<i<<" ";
     }
    }

    //Q4)print all digits of an integer
    int num;
    cin>>num;
    printDigitsOfInteger(num);

    //Q5)create no. using digits
    int noOfDigits;
    cin>>noOfDigits;
    int Num=createNumberUsingDigits(noOfDigits);
    cout<<Num<<endl;

    //Q6)convert km to miles
    float km;
    cout<<"enter km to convert it into miles:"<<endl;
    cin>>km;
    float miles=ConvertKmToMiles(km);
    cout<<miles<<" miles";

    //Q7)convert farenheit to celsius
    float f;
    cin>>f;
    float celsius=FarenheitToCelsius(f);
    cout<<celsius<<" celsiuse value"<<endl;

    //Q8)count all set of bits
    int N; cin>>N;
    int countSetBits=setBitCoumt(N);
    cout<<countSetBits<<endl;

    //Q9)check even/odd using bitwise operator
    int NUM; cin>>NUM;
    CheckEvenOddBitwise(NUM);

}

