#include<iostream>
#include<queue>
using namespace std ;

#define max 1000
long ara[max][max] , path[max] ;

void ini()
{
    long i , j ;
    for(i=1 ; i<100 ; i++)
        for(j=1 ; j<100 ; j++)
            ara[i][j]=0 ;
    for(i=0 ; i<=100 ; i++)
        path[i]=0 ;
}

void BFS(long Node)
{
    queue<long>Q ;
    long root=0 , a ;
    Q.push(root) ;
    while(Q.empty()==0)
    {
        root=Q.front() ;
        for(a=1 ; a<Node ; a++)
        {
            if(ara[root][a]==1)
            {
                Q.push(a) ;
                if(path[a]==0)
                    path[a]=path[root]+1 ;
                ara[root][a]=ara[a][root]=0 ;
            }
        }
        Q.pop() ;
    }
}

int main()
{
    long i , j , node , edge , m , n , a , root , des ;
    cin >> j ;
    cout<< endl ;
    ini() ;
    for(i=1 ; i<=j ; i++)
    {
      //  cout<< endl ;
        a=1 ;
        cin >> node >> edge ;
       // ini(node) ;
        while(a<=edge)
        {
            cin >> m >> n ;
            ara[m][n]=ara[n][m]=1 ;
            a++ ;
        }
       // cin >> root ;
        BFS(node) ;
        for(a=1 ; a<node ; a++)
        {
            cout << path[a] ;
            if(i==j && a==node-1) break ;
            cout<<endl ;
        }
        if(i!=j) cout<<endl ;
       // cout << "The minimum path from " << root << " to " << a << " is " <<path[a] << endl ;

    }
    return 0 ;
}
