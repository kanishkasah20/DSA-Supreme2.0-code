// ---Leetcode-1143  [Longest Common Subsequence]


/*

class solution{
    public:
      int solveUsingRecursion(string a, string b , int i , int j ){
        //base case
        if(i>=a.length()){
            return 0;
        }
        if(j>=b.length()){
            return 0;
        }

        //recursive call 
        int ans= 0;
        if(a[i]==b[j]){
            ans = 1+ solveUsingRecursion(a,b,i+1,j+1);
        }
        else{
            ans = 0+ max(solveUsingRecursion(a,b, i+1 ,j)
                        solveUsingRecursion(a,b,i, j+1));
        }
        return ans;

      }

      int solveUsingMemo(string& a, string& b , int i , int j ,vector<vector<int> >& dp ){
        //base case
        if(i>=a.length()){
            return 0;
        }
        if(j>=b.length()){
            return 0;
        }

        // check if ans already exist
        if(dp[i][j]!= -1){
            return dp[i][j];
        }


        //recursive call 
        int ans= 0;
        if(a[i]==b[j]){
            ans = 1+ solveUsingMemo(a,b,i+1,j+1,dp);
        }
        else{
            ans = 0+ max(solveUsingMemo(a,b, i+1 ,j,dp)
                        solveUsingMemo(a,b,i, j+1,dp));
        }
        dp[i][j]= ans;
        return dp[i][j];

      }
      int longestCommonSubsequence(string text1, string text2){
            int i=0;
            int j=0;
            vector<vector<int> >dp(text1.length()+1, vector<int>(text2.length()+1, -1));
            // int ans = solveUsingRecursion(text1, text2 , i , j);
            int ans = solveUsingMemo(text1,text2 , i, j , dp);
            return ans;
      }

};

*/