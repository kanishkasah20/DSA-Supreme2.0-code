#include<iostream>
using namespace std;

int main(){
    //------diff predefined utility functions(member func of string)
    // string name;

  // cin >> name;

  //empty string
  //string temp = "";

  // cout << "Length of string: "  << name.length() << endl;
  // cout << "String is empty or not: " << temp.empty() << endl;
  //cout <<"Character at position 0 is: " << name.at(0) << endl;

  // cout << "Front character of string is: "<< name.front() << endl;
  // cout << "back character of string is: "<< name.back() << endl;

  // string str1 = "Love";
  // string str2 = "Babbar";

  // cout << "before appending" << endl;
  // cout << str1 << endl;
  // cout << str2 << endl;
  
  // //apend
  // str1.append(str2);

  // cout << "After appending" << endl;
  // cout << str1 << endl;
  // cout << str2 << endl;

  // string desc = "This is a car";
  // desc.erase(4, 3);
  // cout << desc << endl;


  // string name = "Love Babbar";
  // string middle = "kumar ";

  // name.insert(5, middle);

  // cout << "Printing name:  " << name << endl;


  // string name = "love" ;

  // cout << name << endl;

  // name.push_back('R');
  // cout << name << endl;

  // name.pop_back();
  // cout << name << endl;


  // string str1 = "yaar tera super star desi kalakar";
  // string str2  = "staryyyy";


  // if(str1.find(str2) == string::npos){
  //  //not found
  //  cout << "Not FOund" << endl;
  // }
  // else {
  //  cout << "Found" << endl;
  // }

  // string str1 = "babbar";
  // string str2 = "Love";

  // if(str1.compare(str2) == 0) {
  //  cout << "Matching" << endl;
  // }
  // else {
  //  cout << "not matching " << endl;
  // }


  string desc = "this is a car, big daddy of all suvs";

  cout << desc.substr(19, 5) << endl;
  
  





/*
    //creation
    string name;

    //input
    // cin>>name;
    getline(cin,name);  //in string well take multiple inputs with space using getline while in charArray {cin.getline}

    //print
    cout<<"Printing namE: "<<name<<endl;

    cout<<name[0]<<endl;

    int index=0;
    while(name[index]!='\0'){
        cout<<"index: "<<index<<"character: "<<name[index]<<endl;
        index++;
    }

    //printing null value fie
    cout<<name[6]<<endl;
    int value=(int)name[6];

    cout<<"value: "<<value<<endl;
    */
}