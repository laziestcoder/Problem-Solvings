#include<bits/stdc++.h>
using namespace std;
int p[100],z,m[100][100],s[100][100];
int print_optimal(int i,int j)
{
    if(i==j)
        printf("A%d",i);
    else
    {
        printf("(");
        print_optimal(i,s[i][j]);
        cout<<"*";
        print_optimal(s[i][j]+1,j);
        printf(")");
    }
}
int RecursiveMCM(int i,int j)
{
    int k,q;
    if(i==j)
        return 0;
    m[i][j]=9999999;
    for(k=i; k<=j-1; k++)
    {
        q=RecursiveMCM(i,k)+RecursiveMCM(k+1,j)+(p[i-1]*p[k]*p[j]);
        if(q<m[i][j])
        {
            m[i][j]=q;
            s[i][j]=k;
        }
    }
    return m[i][j];
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
    for( i=0;i<z;i++)
    {
        RecursiveMCM(i,z-1);
    }
    //MatrixChainOrder();
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
    print_optimal(1,z-1);
    return 0;
}
