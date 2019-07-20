#include<bits/stdc++.h>
using namespace std;
char x[100],y[100];
int c[100][100], b[100][100];
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
int Lcs_Rec(int i,int j)
{
    if(i==0 || j==0)
        return 0;
    if(x[i-1]==y[j-1])
    {
        b[i][j]=1;
        return Lcs_Rec(i-1,j-1)+1 ;
    }
    else
    {
        return max (Lcs_Rec(i-1,j),Lcs_Rec(i,j-1));
    }
}
int main()
{
    cout<<"Enter two Strings:\n";
    gets(x);
    gets(y);
    int m=strlen(x);
    int n=strlen(y);
    //Lcs_len();
    cout<<"LCS length: "<<Lcs_Rec(m,n)<<"\nLCS: ";
    Print_Lcs(m,n);
    return 0;
}

