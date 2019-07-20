#include<bits/stdc++.h>
using namespace std;
int p[100],z,m[100][100],s[100][100];
int PrintOptimal(int i ,int j)
{
    if(i==j)
        printf("A%d",i);
    else
    {
        printf("(");
        PrintOptimal(i,s[i][j]);
        cout<<"*";
        PrintOptimal(s[i][j]+1,j);
        printf(")");
    }
}
int MatrixChainOrder()
{
    int n=z-1,k;//z=p.length
    int i,q,j;
    for(i=1;i<=n;i++)
    {
        m[i][i]=0;
    }
    int l;
    for(l=2;l<=n;l++)
    {
        for(i=1;i<=n-l+1;i++)
        {
            j=i+l-1;
            m[i][j]=99999999;
            for(k=i;k<=j-1;k++)
            {
               q=m[i][k]+m[k+1][j]+(p[i-1]*p[k]*p[j]);
               if(q<m[i][j])
               {
                   m[i][j]=q;
                   s[i][j]=k;
               }
            }
        }
    }
}
int main()
{
    int i,j;
    cout<<"How many oder:";
    cin>>z;
    for(i=0;i<z;i++)
    {
        cin>>p[i];
    }
    MatrixChainOrder();
    cout<<"\n\nMarray:\n";
    for(i=1;i<=z-1;i++)
    {
        for(j=1;j<=z-1;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n\nSarray:\n";
    for(i=1;i<=z-1;i++)
    {
        for(j=1;j<=z-1;j++)
        {
            cout<<s[i][j]<<" ";
        }
        cout<<"\n";
    }
    PrintOptimal(1,z-1);
    return 0;
}
