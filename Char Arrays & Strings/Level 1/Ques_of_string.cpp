#include<iostream>
#include<string.h>
#include <algorithm>
using namespace std;

int findLength(char ch[], int size){
    // int length=0;
    // for(int i=0;i<size;i++){
    //     if(ch[i]=='\0'){
    //         //ruk jao
    //         break;
    //     }
    //     else{
    //         length++;
    //     }
    // }
    // return length;
    int index=0;
    while(ch[index]!='\0'){
        index++;
    }
    return index;
}

void reverseString(char ch[],int n){
    int i=0;
    int j=n-1;

    while(i<=j){
        swap(ch[i],ch[j]);
        i++; j--;
    }
}

void ConvertToUpperCase(char ch[],int n){
    int index=0;
    while(ch[index]!='\0'){
        //chechk if lowercase, then convert to upper case
        if(ch[index]>='a' && ch[index]<='z'){
            ch[index]=ch[index]-'a'+'A';
        }
        index++;
    }
}

void replaceCharacter(char ch[],int n){
    int index=0;
    while(ch[index]!=0){
        if(ch[index]=='@'){
            //insert space 
            ch[index]=' ';
        }
        index++;
    }
}
bool checkPAlindrome(char ch[],int n){
    //n ->length of string
    int i=0;
    int j=n-1;

    while(i<=j){
        if(ch[i]==ch[j]){
            i++;
            j--;
        }
        else{
            //charcters are npt matching
            return false;
        }
    }
    return true;
}
int main(){
    char ch[100];

    // cin>>ch;
    cin.getline(ch,100);
    int len=findLength(ch,100);

    cout<<"Length of string is: "<<len<<endl;
    cout<<"Printing length: "<<strlen(ch)<<endl;

    //reverse a string
    reverseString(ch,len);
    // reverse(ch.begin(),ch.end());
    cout<<ch<<endl;;

    //convert lower to upper case
    ConvertToUpperCase(ch,len);
    cout<<ch<<endl;
    
    //replace @ with space
    replaceCharacter(ch,len);
    cout<<ch<<endl;;

    //check palindrome
    bool isPalindrome = checkPAlindrome(ch, len);

    if(isPalindrome){
        cout<<"Valid palindrome"<<endl;
    }
    else{
        cout<<"Invalid PAlindrome"<<endl;
    }
    return 0;
}