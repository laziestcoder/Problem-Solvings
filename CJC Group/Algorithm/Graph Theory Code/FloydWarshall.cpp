#include <iostream>
#include <cstdio>
using namespace std;

const int VER = 10;
const int INF = 1000;

int Graph[VER][VER];
int D[VER][VER];
int vertex, edge;

void FloydWarshall()
{
    int i, j, k;

    for(i=1; i<=vertex; i++){
        for(j=1; j<=vertex; j++) {
            D[i][j] = Graph[i][j];
        }
    }

    for(k=1; k<=vertex; k++) {
        for(i=1; i<=vertex; i++) {
            for(j=1; j<=vertex; j++) {
                if(D[i][j] > (D[i][k] + D[k][j])) {
                    D[i][j] = D[i][k] + D[k][j];
                }
            }
        }
    }


}

int main()
{
    int i, j, weight, u, v;
    freopen("FWin.txt", "r", stdin);

    cout << "How many vertex: ";
    cin >> vertex;

    cout << "How many edges: ";
    cin >> edge;
    cout << endl << endl;

    for(i=1; i<=vertex; i++) {
        for(j=1; j<=vertex; j++) {
            Graph[i][j] = INF;
        }
    }

    for(i=1; i<=edge; i++) {
            cin >> u >> v >> weight;
            Graph[u][v] = weight;
    }

    for(i=1; i<=vertex; i++) {
        Graph[i][i] = 0;
    }

    cout << endl << endl;
    for(i=1; i<=vertex; i++) {
        for(j=1; j<=vertex; j++){
            if(Graph[i][j] == 1000)
                cout << "INF\t";
            else
                cout << Graph[i][j] << "\t";
        }
        cout << endl;
    }

    FloydWarshall();

    cout << endl << endl;

    for(i=1; i<=vertex; i++) {
        for(j=1; j<=vertex; j++) {
            cout << D[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
