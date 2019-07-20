#include<bits/stdc++.h>
using namespace std;


vector<int> topological_sorting(vector< vector<int> > graph) {
    vector<int> indegree (graph.size(), 0);
    queue<int> q;
    vector<int> solution;

    for(int i = 0; i < graph.size(); i++) {
        for(int j = 0; j < graph[i].size(); j++) { //iterate over all edges
            indegree[ graph[i][j] ]++;
        }
    }

    //enqueue all nodes with indegree 0
    for(int i = 0; i < graph.size(); i++) {
        if(indegree[i] == 0) {
            q.push(i);
        }
    }

    //remove one node after the other
    while(q.size() > 0) {
        int currentNode = q.front();
        q.pop();
        solution.push_back(currentNode);
        for(int j = 0; j < graph[currentNode].size(); j++) { //remove all edges
            int newNode = graph[currentNode][j];
            indegree[newNode]--;
            if(indegree[newNode] == 0) { //target node has now no more incoming edges
                q.push(newNode);
            }
        }
    }

    if(solution.size() < graph.size()) { //not all nodes could have been sorted -> graph contains cycle
        cerr << "Graph contains cycles." << endl;
    }

    return solution;
}
 int main(){

     while(1){
        vector < vector<int> > g;
        vector<int>r;
     int m,n;
     cin>>m>>n;
     if(n==0 && m == 0) break;
     while(n--){
        int a,b;
        cin>>a>>b;
        g.push_back(a,b);//.push_back(b);
     }
     r = topological_sorting(g);
     for(int i=0;i<m;i++){
        cout<<r[i]<<" ";
     }
     cout<<endl;
    }
     return 0;


 }
