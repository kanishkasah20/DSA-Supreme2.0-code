#include<iostream>
#include<vector>
using namespace std;

void WavePrintMAtrix(vector<vector<int>>v){
    int nRow = v.size();
    int mCol = v[0].size();

    for(int col=0;col<mCol;col++){
        //even no of col -> top to bottom
        if((col & 1)==0){ //col(lsb=0->even) wrna (lsb=1->odd)
            for(int row=0;row<nRow;row++){
                cout<<v[row][col]<<" ";
            }cout<<endl;

        }
        else{
            //odd no of col -> bottom to top
            for(int row=nRow-1;row>=0;row--){
                cout<<v[row][col]<<" ";
            }cout<<endl;
        }
    }

}
int main(){
    vector<vector<int>>v{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    WavePrintMAtrix(v);
}