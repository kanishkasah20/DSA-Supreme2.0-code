#include<iostream>
using namespace std;

int main(){


//full pyramid
//     * 
//    * *
//   * * *
//  * * * *
// * * * * *
    // int n;
    // cin>>n;
    int m=5;
    for(int row=0; row<m;row++){
        //inner loop

        //for spaces
        for(int col=0;col<m-row-1;col++){
            cout<<" ";
        }
        //for stars
        for(int col=0;col<row+1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }

// Q) Inverse full pyramid
// * * * * *
//  * * * *
//   * * *
//    * *
//     *
    int n=5;
    for(int row=0; row<n;row++){
        //inner loop

        //for spaces
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        //for stars
        for(int col=0;col<n-row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // Q)Daimond pattern
//     * 
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * * 
//    * *
//     *

int num;
cin>>num;
    int u=num/2;
    for(int row=0; row<u;row++){
        //inner loop

        //for spaces
        for(int col=0;col<u-row-1;col++){
            cout<<" ";
        }
        //for stars
        for(int col=0;col<row+1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //another half inverted daimond 
    // int n=5;
    for(int row=0; row<u;row++){
        //inner loop

        //for spaces
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        //for stars
        for(int col=0;col<u-row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }


//Q)hollow pyramid
//    *
//   * *
//  *   *
// *     *
    int k=4;
    for(int row=0; row<k;row++){
        //inner loop

        //for spaces
        for(int col=0;col<k-row-1;col++){
            cout<<" ";
        }
        //for stars
        for(int col=0;col<row+1;col++){
            //print star for first and last col
            if(col==0 || col==(row+1-1)){
            cout<<"* ";
            }
            //for every col btw 1st and last col ,print space
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

//Q)inverted hollow pyramid
// *     *
//  *   *
//   * *
//    *
    int q=4;
    for(int row=0; row<q;row++){
        //inner loop

        //for spaces
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        //for stars
        for(int col=0;col<q-row;col++){
            if(col==0 || col==(q-row-1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

//Q)half hollow pyramid
// * * * * *   * * * * *
// * * * *       * * * *
// * * *           * * * 
// * *               * *
// *                   * 
    int w=5;
    for(int row=0;row<w;row++){
       //inverted pyramid1
       for(int col=0;col<w-row;col++){
         cout<<"* ";
       }
       //full pyramid1
       for(int col=0;col<2*row+1;col++){
        cout<<"  ";
       }
       //inverted pyramid2
       for(int col=0;col<w-row;col++){
         cout<<"* ";
       }
       cout<<endl;
    }
    
// Q
// 1
// 2*2
// 3*3*3
// 4*4*4*4
int z;
cin>>z;

for(int row=0;row<z;row++){
    //inner loop
    for(int col=0;col<2*row+1;col++){
        if(col%2==1){
            //odd num
            cout<<"*";
        }
        else{
            cout<<row+1;
        }
    }cout<<endl;
}
//Q


}