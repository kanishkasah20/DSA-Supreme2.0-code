#include<iostream>
using namespace std;

int getQuotient(int divisor,int dividend){
    int s=0; int e=dividend;
    int mid=s+(e-s)/2;
    int ans=-1;
    
    while(s<=e){
        if(mid*divisor==dividend){
            return mid;
        }
        if(mid*divisor<=dividend){
            //ans store
            ans=mid;

            //right m jao
            s=mid+1;
        }
        else{
            //lrft
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}

int main(){
    int divisor=-7;
    int divident=29;

    int Ans= getQuotient(abs(divisor),abs(divident));
    
    //for negative number(divisor ya dividend)
    //now we need to decide k sign konsa lagye +ve ya negative
    if((divisor>0 && divident<0)||(divisor<0 && divident>0)){
        Ans=0-Ans;
    }
    cout<<"ans is: "<<Ans;
}