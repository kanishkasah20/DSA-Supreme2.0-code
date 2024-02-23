#include <iostream>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;

class Graph {
  public:
    unordered_map<int, list<int> > adjList;
    void addEdge(int u, int v, bool direction) {
      //direction -> 0 -> undirected
      //direction -> 1 -> directed
      if(direction == 1) {
        adjList[u].push_back(v);
      }
      else {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
      }
      cout << endl << "printing adjList" << endl;
      printAdjList();
      cout << endl;
    }
    void printAdjList() {
      for(auto i: adjList) {
        cout << i.first << "-> {";
        for(auto neighbour: i.second) {
          cout << neighbour <<", ";
        }
        cout << "}" << endl;
      }
    }
    bool checkCycleUndirectedBFS(int src){
        queue<int> q;
        unordered_map<int,bool> visited;
        unordered_map<int,int> parent;
        //intial state
        q.push(src);
        visited[src]=true;
        parent[src] = -1;

        while(!q.empty()){
            int frontNode = q.front();
            q.pop();

            for(auto nbr: adjList[frontNode]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr]=true;
                    parent[nbr]=frontNode;
                }
                else if(visited[nbr]==true && nbr !=parent[frontNode]){
                    //cycle present
                    return true;
                }
            }
        }
        //cycle not present
        return false;
    }
};

/*
//by using template we can write generalize code, like type (int,char)etc 
// for weight type we'll using int type only , and for all for int type data 
// replace it with template T , and Template type is specified in main function 
template <typename T> 
class Graph {
  public:
    unordered_map<T, list<pair<T,int> > > adjList;

    void addEdge(T u, T v, int wt, bool direction) {
      if(direction == 1) {
        adjList[u].push_back(make_pair(v,wt));
      }
      else {
        adjList[u].push_back({v,wt});
        adjList[v].push_back({u,wt});
      }
      // cout << endl << "printing adjList" << endl;
      // printAdjList();
      // cout << endl;
    }

    void printAdjList() {
      for(auto i: adjList) {
        cout << i.first <<": {  ";
        for(pair<T,int> p: i.second) {
          cout << "{"<<p.first <<", "<<p.second <<"}, ";
        }
        cout<<"}" << endl;
      }
    }

    void bfsTraversal(T src,unordered_map< T, bool>& vis) {
      //adjList alrady data member me hai 
      //visited
      
      //queue
      queue<T> q;

      //initial state
      q.push(src);
      vis[src] =true;

      while(!q.empty()) {
        T frontNode = q.front();
        cout << frontNode << " ";
        q.pop();

        //go to nbr
        for(auto nbr: adjList[frontNode]) {
          T nbrData = nbr.first;

          if(!vis[nbrData]) {
            q.push(nbrData);
            vis[nbrData] = true;
          }
        }
      }

    }

    void dfs(T src, unordered_map<T,bool>& vis ) {
      vis[src] = true;
      cout << src << " ";

      for(auto nbr: adjList[src]) {
        T nbrData = nbr.first;
        if(!vis[nbrData]) {
          dfs(nbrData, vis);
        }
      }
    }
    

};  

*/

// ---ye detect cycle in undirected graph using bfs , mene gfg m bhi solve kiya h aur uska solutuion issi m dusri cpp file m h check clearly

int main() {
  Graph g;
  g.addEdge(0,1,0);
  g.addEdge(1,2,0);
  g.addEdge(1,3,0);
  g.addEdge(2,4,0);
//   g.addEdge(3,4,0);
  g.addEdge(2,5,0);
  int src=0;
  bool isCycle = g.checkCycleUndirectedBFS(src);
  if(isCycle){
    cout<<"Cycle Present" <<endl;
  }
  else{
    cout<<"cycle Absent" <<endl; 
  }


/*

  Graph<char> g; //here template type is char 
 // cout << "HII" << endl;
  g.addEdge('a','b',5,0);
  g.addEdge('a','c',10,0);
  g.addEdge('c','d',20,0);
  g.addEdge('c','e',50,0);
  g.addEdge('d','e',20,0);
  g.addEdge('e','f',50,0);

  unordered_map<char, bool> visited;
  //g.dfs('a',visited);
  int count=0;
  for(char node='a'; node<='f'; node++) { //same for this handling disconnected graph by looping all node visited
    if(!visited[node]) {
        g.dfs(node, visited);
        count++;
    }
  }
  
  //HW: find out number of disconnected components in a graph
  

  // unordered_map<char, bool> vis;
  // for(char node='a'; node<='f'; node++) {  //( yahi glti krte h->  for handling disconnected componenet of graph loop for all node to get visited)
  //     if(!vis[node] ) {
  //       g.bfsTraversal(node,vis);
  //     }
  // }

  */

  
  return 0;
}