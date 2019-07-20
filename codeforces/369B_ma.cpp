#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,row,col,i,j;
    long long int a[501][501],sr[501]= {0},sc[501]= {0},sdi=0,sdj=0,d1,d2,d3;
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
            if(i==j)
                sdi+=a[i][j]; // diagonal summation
            if(a[i][j]== 0 )
            {
                row=i;        // if 0 store i,j
                col=j;
            }
        }
    }

    for(i=0,j=n-1; i<n,j>=0; i++,j--)
        sdj+=a[i][j]; //diagonal summation 2
    for(j=0; j<n; j++)
    {
        for(i=0; i<n; i++)
            sc[j]+=a[i][j];  //column summation
    }

    if(col!=0 && col!=n-1)
        d1=sc[0]-sc[col];
    else
        d1=sc[1]-sc[col];

    if(row!=0 && row!=n-1)
        d2=sr[0]-sr[row];
    else
        d2=sr[1]-sr[row];


    d3=abs(sdi-sdj);


    if(d3!=0)
    {
        if(d1==d2 && d2==d3 && d1 > 0)
            cout<<d1<<endl;
        else
            cout<<"-1"<<endl;
    }

    else if(d1==d2 && d1 > 0 )
    {
        cout<<d2<<endl;
    }
    else
        cout<<"-1"<<endl;



    return 0;
}
