#include<iostream>
#include<stack>
using namespace std;

bool checkRedundant(string &str){
    stack<char> st;

    for(int i =0;i<str.length();i++){
        char ch = str[i];

        if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/'){
            st.push(ch);
        }
        else if(ch==')'){

            int operatorCount=0;
            while(!st.empty() && st.top()!='('){
                char temp = st.top();
                if(temp=='+' || temp=='-' || temp=='*' || temp=='/'){
                    operatorCount++;
                }
               st.pop();
            }
            //yha pr ap tabhi pohochoge jab
            //apke stack k top pr ek opening bracket hoga
            st.pop();

            if(operatorCount ==0){
                return true;
            }
        }
        
    }
    //agar main yha tk pohohcha hu 
    //iska mtlb k har ek bracket k pair k beech me
    //ek operator pkka mila hoga
    return false; //reduntant bracket mila hai

};

int main(){
    string str= "(((a+b)*(c+d)))";
    bool ans = checkRedundant(str);

    if(ans==true){
        cout<<"Redundant brackets present"<<endl;
    }
    else{
        cout<<"Redundant brackets not present"<<endl;
    }
    return 0;
}