#include<bits/stdc++.h>
using namespace std;
char x[100],y[100];
int m,n,c[100][100], b[100][100];
int Print_Lcs(int i,int j)
{
    if(i==0 || j==0)
        return 0;
    if(b[i][j]==1)
    {
        Print_Lcs(i-1,j-1);
        cout<<x[i-1];
    }
    else if(b[i][j]==2)
    {
        Print_Lcs(i,j-1);
    }
    else
    {
        Print_Lcs(i-1,j);
    }
}
int Lcs_len()
{
    int i,j;
    m=strlen(x);
    n=strlen(y);
    for(i=1;i<=m;i++)
    {
        c[i][0]=0;
    }
    for(j=0;j<=n;j++)
    {
        c[0][j]=0;
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(x[i-1]==y[j-1])
            {
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]=1;
            }
            else if(c[i][j-1]>c[i-1][j])
            {
                c[i][j]=c[i][j-1];
                b[i][j]=2;
            }
            else
            {
                c[i][j]=c[i-1][j];
                b[i][j]=3;
            }
        }
    }
    cout<<"Length of LCS: "<<c[m][n]<<"\n";
}
int main()
{
    cout<<"Enter two Strings:\n";
    gets(x);
    gets(y);
    Lcs_len();
    cout<<"LCS: ";
    Print_Lcs(m,n);
}
