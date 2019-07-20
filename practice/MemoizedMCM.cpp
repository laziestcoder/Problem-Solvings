#include<bits/stdc++.h>
using namespace std;
const int INF=99999999;
int p[100],z,m[100][100],s[100][100];
int LookUpChain(int i,int j)
{
    int q,k;
    if(m[i][j]<INF)
        return m[i][j];
    if(i==j)
        m[i][j]=0;
    else
    {
        for(k=i;k<=j-1;k++)
        {
          q=LookUpChain(i,k)+LookUpChain(k+1,j)+(p[i-1]*p[k]*p[j]);
          if(q<m[i][j])
            {
                m[i][j]=q;
                s[i][j]=k;
            }
        }
    }
    return m[i][j];
}
int MemoizedMatChain()
{
    int n=z-1;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            m[i][j]=INF;
        }
    }
    return LookUpChain(1,n);
}
int main()
{
    int i,j;
    cout<<"How many oder:";
    cin>>z;
    for(i=0; i<z; i++)
    {
        cin>>p[i];
    }
    //MatrixChainOrder();
    MemoizedMatChain();
    cout<<"\n\nMarray:\n";
    for(i=1; i<=z-1; i++)
    {
        for(j=1; j<=z-1; j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n\nSarray:\n";
    for(i=1; i<=z-1; i++)
    {
        for(j=1; j<=z-1; j++)
        {
            cout<<s[i][j]<<" ";
        }
        cout<<"\n";
    }
    //PrintOptimal(1,z-1);
    return 0;
}
