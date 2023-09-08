#include<iostream>
using namespace std;

//Q)find area of circle
void CircleArea(int radius){
    float area = 3.14*radius*radius;
    cout<<"Area of circle is "<<area<<endl;
}

//Q)find factorial of a no.
int factorialOfNo(int n){
    int fact=1;
    while(n>=1){
        fact=fact*n;
        n--;
    }
    return fact;
}



int main(){
    
    //Q)find area of circle
    float rad;
    cin>>rad;
    CircleArea(rad);

    //Q)find factorial of a no.
    int n;
    cin>>n;
    int ans=factorialOfNo(n);
    cout<<"Factorial of number is: " <<ans<<endl;

}