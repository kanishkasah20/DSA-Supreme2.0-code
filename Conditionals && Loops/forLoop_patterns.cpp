#include <iostream>
using namespace std;

int main() {

  
  // for(int i=1;i<=10;i++){
  //   cout<<i<<endl;
  // }

  // for(int i=0;i<=10;i=i+2){
  //   cout<<i;
  // }

  // for(int i=10;i>=0;i=i-3){
  //   cout<<i<<endl;
  // }

  // for(int i=0; i<3; i=i+1){
  //   cout<<"Outer loop"<<i<<endl<<endl;
    
  //   for(int j=0; j<3;j=j+1){
  //     cout<<"Inner loop"<<j<<endl;
      
  //   }
  // }
  // cout<<endl;


  // for(int i=1;i<11;i++){
  //   cout<<"sweety"<<endl;
  // }

//Q)19 table
  // for(int i=1;i<=10;i++){
  //   cout<<"19 * "<<i<<"="<<19*i<<endl;
  // }

  // Q) square pattern
  // * * * *
  // * * * *
  // * * * *
  // * * * *

  //outer loop ->rows
  for(int i=0;i<4;i++){
    //print 4 stars
    for(int j=0;j<4;j++){
      cout<<"* ";
    }
    cout<<endl;
  }


  // Q)rectangle pattern
  // * * * * *
  // * * * * *
  // * * * * *

//for outer loop-> rows
  for(int i=0;i<3;i++){
     //for r stars in inner loop
     for(int j=0;j<5;j++){
      cout<<"* ";
     }
     //next line after 5 stars
     cout<<endl;
  }


  // Q3) hollow rectangle
  // * * * * * 
  // *       *
  // *       *
  // *       *
  // * * * * *

  for(int row=0;row<5;row++){
    //inner loop
    for(int col=0;col<5;col++){
      //if 0th or last row then print star
      if(row==0 || row==4){
        cout<<"* ";
      }
      else{
        if(col==0 || col==4){
          cout<<"* ";
        }
        else{
          cout<<"  ";
        }
      
      }
    }
    cout<<endl;
  }


  // Q) half pyramids 

  

  return 0;

}