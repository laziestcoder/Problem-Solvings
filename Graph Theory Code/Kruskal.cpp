#include<iostream>
#include<cstdio>
using namespace std;

const int VAR=20;

struct{
    int u,v,w;
}edges[VAR];

struct{
    int u,v,w;
}A[VAR];

int rank[VAR];
int parent[VAR];
int vertex,edge;

void sortWeight(){
  int tempw,tempu,tempv,i,j;

  for(i=1;i<=edge;i++){
    for(j=1;j<=edge;j++){
        if(edges[i].w<edges[j].w){
            tempw=edges[i].w;
            tempu=edges[i].u;
            tempv=edges[i].v;

            edges[i].w=edges[j].w;
            edges[i].u=edges[j].u;
            edges[i].v=edges[j].v;

            edges[j].w=tempw;
            edges[j].u=tempu;
            edges[j].v=tempv;

        }
    }
  }
}

void make_set(int x){
    parent[x]=x;
    rank[x]=0;
}

void link(int x,int y) {
    if(rank[x]>rank[y])
        parent[y]=x;
    else
        parent[x]=y;
    if(rank[x]==rank[y])
        rank[y]=rank[y]+1;
}

int find_set(int x){
    if(x!=parent[x])
        parent[x]=find_set(parent[x]);
    return parent[x];
}

void Union(int x,int y){
    link(find_set(x),find_set(y));
}

void kruskal(){
    int i,j;

    sortWeight();

    for(i=1;i<=edge;i++)
        make_set(i);

    for(i=1;i<=edge;i++){
        if(find_set(edges[i].u)!=find_set(edges[i].v)){
            A[i].u=edges[i].u;
            A[i].v=edges[i].v;
            A[i].w=edges[i].w;

            Union(edges[i].u,edges[i].v);
        }
    }

}

int main(){

    int i,j;
    int sum=0;

    freopen("kruskal.txt","r",stdin);

    cin>>vertex>>edge;

    cout<<endl<<"Input edges:"<<endl<<endl;

    for(i=1;i<=edge;i++){
        cin>>edges[i].u>>edges[i].v>>edges[i].w;
    }

    cout<<"The minimum spanning tree is: "<<endl<<endl;

    kruskal();

    for(i=1;i<=edge;i++){
        if(A[i].w!=0){
            cout<<"From "<<A[i].u<<"to "<<A[i].v<<endl;
            sum=sum+A[i].w;
        }
    }

    cout<<endl<<endl<<"Total weight: "<<sum;

    return 0;
}


