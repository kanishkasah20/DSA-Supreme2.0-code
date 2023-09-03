#include<iostream>
using namespace std;

int main(){

// Q)hollow inverted half pyramid
// * * * * *
// *     *
// *   *
// * *
// *
    int n;
    cin>>n;

    for(int row=0;row<n;row++){
        //outer loop
        
        for(int col=0;col<n-row;col++){
            //inner loop
            if(row==0 || row==n-1){
            cout<<"* ";
            }
            else{
                if(col==0 || col==(n-row-1)){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
    

    // Q)Hollow daimond
//    *
//   * *
//  *   *
// *     *
// *     *
//  *   *
//   * * 
//    *


// 1)half hollow pyramid
for(int row=0;row<n;row++){
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
            
        }
        for(int col=0;col<row+1;col++){
            if(col==0 || col==(row+1-1)){
            cout<<"* ";
            }
            else{
                cout<<"  ";
            }
    }
    cout<<endl;
}
//2)half inverted hollow pyramid
    for(int row=0;row<n;row++){
        for(int col=0;col<row;col++){
            cout<<" ";
            
        }
        for(int col=0;col<n-row;col++){
            if(col==0 || col==(n-row-1)){
            cout<<"* ";
            }
            else{
                cout<<"  ";
            }
    }
    cout<<endl;
}


//Q)flipped solid diamond
// * * * * *    * * * * *
// * * * *        * * * *
// * * *            * * *
// * *                * *
// *                    *
// *                    *
// * *                * *
// * * *            * * *
// * * * *        * * * *
// * * * * *    * * * * *

//---upper half part
for(int row=0;row<n;row++){
    //inverted pyramid1
    for(int col=0;col<n-row;col++){
        cout<<"* ";
    }
    //full pyramid1
    for (int col = 0; col < 2*row+1; col++){
        cout<<"  ";
    }
    //inverted pyramid2
    for(int col=0;col<n-row;col++){
        cout<<" *";
    }
    cout<<endl;
}

//----lower half part
for(int row=0;row<n;row++){
    for(int col=0;col<row+1;col++){
        cout<<"* ";
    }
    for (int col = 0; col < 2*n-2*row-1; col++){
        cout<<"  ";
    }
    for(int col=0;col<row+1;col++){
        cout<<" *";
    }
    cout<<endl;
}

//Q)---------
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 3*3*3
// 2*2
// 1
for(int row=0;row<n;row++){
    for(int col=0;col<2*row+1;col++){
        if(col%2==0){
            cout<<row+1;
        }
        else{
            cout<<"*";
        }
        
    }
    cout<<endl;
}
//another half part 
// 3*3*3
// 2*2
// 1
int m=n-1;
for(int row=0;row<m;row++){
    for(int col=0;col<2*m-2*row-1;col++){
        if(col%2==0){
            cout<<n-row-1;
        }
        else{
            cout<<"*";
        }
        
    }
    cout<<endl;
}
//---------

// Q)
// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA

for(int row=0;row<n;row++){
    char ch;
    for(int col=0;col<row+1;col++){
        int number =col+1;
        ch= number+'A'-1;
        cout<<ch;
    }

    //jo last char hog USSE REVERSE jana h 
    //jab tak wapas A tak nhi pochte tab tak print krenge

    for(char alphabat= ch; alphabat>'A';){
        alphabat=alphabat-1; //phle dercement krenge then print next charcter
        cout<<alphabat;
    }
    cout<<endl;
}
//--------------

// Q
// 1 2 3 4 5
// 2     5
// 3   5
// 4 5
// 5

for(int row=0;row<n;row++){
    for(int col=0;col<n-row;col++){
        if(row==0|| row==n){
            cout<<col+1<<" ";
        }
        else{
            if(col==0 ){
                cout<<row+1<<" ";
            }
            else if(col==n-row-1){
                cout<<n;
            }
            else{
                cout<<"  ";
            }
        }
    }
    cout<<endl;
}
//---


//Q) Numeric palindrome equilateral pyramid
//     1
//    121
//   12321
//  1234321
// 123454321
for(int row=0; row<n;row++){
    int num;
    for(int col=0;col<n-row-1;col++){
        //for space
        cout<<" ";
    }
    for(int col=0;col<row+1;col++){
        // for printing number part
        num=col+1;
        cout<<num;
    }
    for(int col=num;col>1;){
        //reverse print num
        col=col-1;
        cout<<col;

    }
    cout<<endl;

}
//---


//Q)
// * * * * * * * * 1 * * * * * * * *
// * * * * * * * 2 * 2 * * * * * * *
// * * * * * * 3 * 3 * 3 * * * * * *
// * * * * * 4 * 4 * 4 * 4 * * * * *
// * * * * 5 * 5 * 5 * 5 * 5 * * * *

for(int row=0;row<n;row++){
    //for 1st star paatern
    for(int col=0;col<2*n-row-2;col++){
        cout<<"* ";
    }

    //for 2nd counting star pattern
    for(int col=0;col<2*row+1;col++){
        if(col%2==0){
            cout<<row+1;
        }
        else{
            cout<<" * ";
        }
    }
    //for 2nd star paatern
    for(int col=0;col<2*n-row-2;col++){
        cout<<" *";
    }
    cout<<endl;
}
//-----------

// Q)Solid half diamond
// *
// * *
// * * *
// * * * *
// * * *
// * *
// *

for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<"* ";
            
        }
        cout<<endl;
}
for(int row=0;row<n;row++){
        for(int col=0;col<n-row-1;col++){
            cout<<"* ";
            
        }
        cout<<endl;
}

//Q)floy'd triangle
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20 21

int c=1;
for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
                cout<<c<<" ";
                c++;
        }
        cout<<endl;
}

// Q) butterfly pattern
// *              *
// * *          * *
// * * *      * * *
// * * * *  * * * *
// * * * *  * * * *
// * * *      * * *
// * *          * *
// *              *

//1st half part
for(int row=0;row<n;row++){

        //half pyramid1
        for(int col=0;col<row+1;col++){
            cout<<"* ";
            
        }

        //for spaces
        for(int col=0;col<2*n-2*row-2;col++){
            cout<<"  ";
            
        }

        //half pyramid2
        for(int col=0;col<row+1;col++){
            cout<<" *";
            
        }
        cout<<endl;
}
//2nd part
for(int row=0;row<n;row++){

        //inverted pyramid1
        for(int col=0;col<n-row;col++){
            cout<<"* ";
            
        }

        //for space
        for(int col=0;col<2*row;col++){
            cout<<"  ";
            
        }

        //inverted pyramid2
        for(int col=0;col<n-row;col++){
            cout<<" *";
            
        }
        cout<<endl;
}

}