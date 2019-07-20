#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,row,col,i,j;
    long long int a[501][501],sr[501]= {0},sc[501]= {0},dig1=0,dig2=0;
    scanf("%d",&n);
    if(n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    for(i=0; i<n ; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%lld",&a[i][j]);

            sr[i]+=a[i][j]; //row summation

            sc[j]+=a[i][j]; // col summation

            if(i==j)
                dig1+=a[i][j]; // diagonal1 summation

            if(i+j == n-1 )
                dig2+= a[i][j];  // diagonal2 summation


            if(a[i][j]== 0 )
            {
                row=i;        // if 0 store i,j as row col
                col=j;
            }
        }
    }
    long long int cs=sr[0];
    if(row==0)
        cs=sr[1];

    long long int d1=-1,d2=-1,d3=-1,d4=-1;

    if(col!=0 && col!=n-1)
        d1=sc[0]-sc[col];

    else
        d1=sc[1]-sc[col];

    d3=cs-dig1;
    d4=cs-dig2;

    if(row!=0 && row!=n-1)
        d2=sr[0]-sr[row];

    else
        d2=sr[1]-sr[row];

    if( ((row==col && d3!=0 ) && (row+col==n-1 && d4!=0 ) ) || ( d1 != d2))
        cout<<"-1"<<endl;
    else if( d1 == d2 )
    {
        if(d3 != d1 && d3 > 0 )
           cout<<"-1"<<endl;
        else if(d4!=d1 && d4!=0)
            cout<<"-1"<<endl;
        else if(d1!=0)
            cout << d1 <<endl;
    }
    else
        cout<<"-1"<<endl;
    return 0;
}
