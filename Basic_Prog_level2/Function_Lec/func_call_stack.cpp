#include<iostream>
using namespace std;

//Q1)write a func to print sum of 3 number
void printSum(int a, int b, int c){
    int ans=a+b+c;
    cout<<"Sum is:"<<ans<<endl;

}

//Q2)write a func to print sum of 3 number
int printsum(int a, int b, int c){
    int ans=a+b+c;
    return ans;
}

//using return keyword in void function
void messagePrint(){
    cout<<"Msg1"<<endl;
    return; //can use return but dont pass anything with return
    cout<<"msg2"<<endl;
}
int main(){
   
   //Q2
   int sum=printsum(4,4,5);
   cout<<"Sum is:"<<sum<<endl;

//    Q1
   printSum(2,3,5);

   return 0;
}