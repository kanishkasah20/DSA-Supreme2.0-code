//  ---same ques of gfg solved it by dfs method
//gfg ques - [detect cycle in undirected graph]
 
 class Solution {
  public:
    bool checkCycle(int src,unordered_map<int,bool>& vis, int parent,vector<int> adj[]) {
        vis[src] = true;
        
        for(auto nbr: adj[src]) {
            if(nbr == parent) {
                // agr nbr==parent h mtlb usko uski parent ne hi isit kiya jisse hume koi issue nhi h
                // toh humne continue krliya
                continue;
            }
            // agr visited nhi h toh vohi visit kro , true mark karo yaha humne rec call mardi
            if(!vis[nbr]) {
                bool ans = checkCycle(nbr, vis, src, adj);
                if(ans == true) {
                    return true;
                }
            }
            //lekin agr phele se nbr==parent condition m humne check krliya ki usko uski parent nhi h visit kiya h 
            // iska mtlb ab nbr wali node ko dubara visit uska parent nhi kra visit means parent ke alwa koi aur visit krne ki koshish krega mtlb 
            // cycle present h, isly return true
            else if(vis[nbr]==1) {
                return true;
            }
        }
        return false;
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        unordered_map<int,bool> vis;
        //for handling disconnected componenet
        for(int i=0;i<V;i++) {
            if(!vis[i]) {
                int parent = -1;
                bool isCyclic = checkCycle(i, vis, parent,adj);
                if(isCyclic == true) {
                    return true;
                }
            }
        }
        return false;
    }
};