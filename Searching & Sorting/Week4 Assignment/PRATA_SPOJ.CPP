#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//nP -> no. of prata
bool isPossibleSolution(vector<int>cooksRanks, int nP ,int mid){
    int currP=0; //intial cooked Prata count
    for(int i=0;i<cooksRanks.size();i++){
        int R = cooksRanks[i] , j=1;
        int timeTaken=0;

        while(true){
            if(timeTaken + j*R <=mid){
                ++currP;
                timeTaken += j*R;
                j++;
            }
            else{
                break;
            }
        }
        if(currP >= nP){
            return true;
        }
    }
    return false;

}

int minTimeToCompleteOrder(vector<int>cooksRanks, int nP){
    int s=0;
    int highestRank = *max_element(cooksRanks.begin(), cooksRanks.end());
    int e = highestRank * (nP * (nP+1)/2);
    int ans=-1;

    while(s<=e){
        int mid= (s+e)>>1;
        if(isPossibleSolution(cooksRanks,nP,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}

int main(){
    // T->test cases
    //nP -> no of parata
    //nC -> no of cooks
    //R -> rank of cooks
    int T; cin>>T;

    while(T--){
        int nP , nC;
        cin>> nP >> nC;
        vector<int>cooksRanks;
        while(nC--){
            int R; cin>>R;
            cooksRanks.push_back(R);
        } 
        cout<<minTimeToCompleteOrder(cooksRanks, nP)<<endl;
    }
    return 0;
}
