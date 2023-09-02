int k=5;
    for(int row=0; row<k;row++){
        //inner loop

        //for spaces
        for(int col=0;col<k-row-1;col++){
            cout<<" ";
        }
        //for stars
        for(int col=0;col<row+1;col++){
            if(col==0 || col==(row+1-1)){
            cout<<"*  ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
