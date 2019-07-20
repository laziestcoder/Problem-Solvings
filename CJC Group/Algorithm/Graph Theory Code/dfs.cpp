#include<iostream>
#include<cstdio>
using namespace std;

const int ver =7;
const int nil = -1;
const int white =1;
const int gray = 2;
const int black =3;


int graph[ver][ver];
int vertex;
int edge;
int color[ver];
int parent[ver];
int d[ver];
int f[ver];
int time=0;

void dfs_visit(int u){

    int i;
    time =time+1;
    d[u]=time;
    color[u]=gray;

    for(i=1;i<=edge;i++){
        if(graph[u][i]==1 && color[i]==white){
            parent[i]=u;
            dfs_visit(i);
        }
    }
    color[u]=black;
    time=time+1;
    f[u]=time;

}


void dfs(){

    int i;
    for(i=1;i<=vertex;i++){
        color[i]=white;
        parent[i]=nil;
    }
    for(i=1;i<=vertex;i++){
        if(color[i]==white){
            dfs_visit(i);
        }
    }
}

int main(){

    int i,j,u,v;

    freopen("dfs.txt","r",stdin);

    cin>>vertex >>edge;

    for(i=1;i<=vertex;i++){
        for(j=1;j<=vertex;j++){
            graph[i][j]=0;
    }
    }

    for(i=1;i<=edge;i++){
        cin>>u >>v ;
        graph[u][v]=1;
    }

    for(i=1;i<=vertex;i++){
        for(j=1;j<=vertex;j++){
            cout<< graph[i][j] <<" ";
        }
    cout<<endl;

    }
cout<<endl;
    dfs();

    for(i=1;i<=vertex;i++){
        cout<<"discovery time of "<<i<<": "<<d[i]<<endl;
        cout<<"finishing time of "<<i<<": "<<f[i]<<endl;
    }

}

