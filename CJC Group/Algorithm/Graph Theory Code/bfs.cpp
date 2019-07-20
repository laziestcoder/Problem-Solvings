#include <iostream>
#include <cstdio>
using namespace std;

const int VER = 10;
const int INF = 1000;
const int NIL = -1;
const int WHITE = 0;
const int GRAY = 1;
const int BLACK = 2;

int vertex, edge;
int Graph[VER][VER];
int color[VER];
int d[VER];
int parent[VER];

class Queue {
    int Qdata[100];
    int head, tail;
public:
    Queue() {
        head = tail = 0;
    }
    int isEmpty() {
        if(head == tail)
            return 1;
        else
            return 0;
    }
    void insertQ(int x) {
        Qdata[tail++] = x;
    }
    void extractQ(int &x) {
        x = Qdata[head++];
    }
};

void BFS(int source)
{
    int i, u;
    for(i=1; i<=vertex; i++) {
        color[i] = WHITE;
        d[i] = INF;
        parent[i] = NIL;
    }
    color[source] = GRAY;
    d[source] = 0;

    Queue q;
    q.insertQ(source);

    while(q.isEmpty() == 0) {
        q.extractQ(u);
        for(i=1; i<=vertex; i++) {
            if(Graph[u][i] == 1 && color[i] == WHITE) {
                color[i] = GRAY;
                d[i] = d[u] + 1;
                parent[i] = u;
                q.insertQ(i);
            }
        }
        color[u] = BLACK;
    }
}

void print_path(int s, int v){

    if(v==s)
        cout<<s<<" ";
    else if(parent[v]==NIL)
        cout<<"No path from"<<" " <<s<<" "<<"to"<<v;
    else
    {


       print_path(s,parent[v]);
        cout<<v<<" ";


    }

}


int main()
{
    int i, j, u, v;
    freopen("bfsin.txt", "r", stdin);

    cin >> vertex;
    cin >> edge;

    for(i=1; i<=vertex; i++) {
        for(j=1; j<=vertex; j++) {
            Graph[i][j] = 0;
        }
    }
    //Input edges
    for(i=1; i<=vertex; i++) {
        cin >> u >> v;
        Graph[u][v] = 1;
        Graph[v][u] = 1;
    }
    cout << endl << endl << "Graph: " << endl << endl;
    for(i=1; i<=vertex; i++) {
        for(j=1; j<=vertex; j++) {
            cout << Graph[i][j] << " ";
        }
        cout << endl;
    }

    BFS(1);
    cout << endl << "Source is 1" << endl << endl;
    for(i=1; i<=vertex; i++) {
        cout << "Distance from source to vertex " << i << " is: " << d[i] << endl;
    }

    for(i=2;i<=vertex;i++){
            cout<<endl<<"path from 1 to "<<i<<": ";
        print_path(1,i);
    }


    return 0;
}
