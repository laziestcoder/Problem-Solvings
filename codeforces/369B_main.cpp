#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,r,c,i,j;
    while(1) {
        long long int a[501][501],sr[501]= {0},sc[501]= {0},sdi=0,sdj=0,d1,d2,d3,d4;


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
                sc[j]+=a[i][j];  //column summation

                if(i==j)
                    sdi+=a[i][j]; // diagonal summation
                if(i+j == n-1)
                    sdj+=a[i][j]; //diagonal summation 2

                if(a[i][j]== 0 )
                {
                    r=i;        // if 0 store i,j
                    c=j;
                }
            }
        }


        long long int s=sr[0],cs=0,rs=0;

        if(r==0)
            s=sr[1];
        if(c!=0)
        {
            if(s!=sc[0])
            {
                cout<<"-1"<<endl;
                return 0;
            }
        }
        else if(s!=sc[1])
        {
            cout<<"-1"<<endl;
            return 0;
        }



        for(j=0; j<n ; j++)
        {
            if(j!=c)
            {
                if(s!=sc[j])
                {
                    cout<<"-1\n";
                    return 0;
                }
            }
            else
                cs=sc[j];
        }
        for(i=0; i<n; i++)
        {
            if(i!=r)
            {
                if(s!=sr[i])
                {
                    cout<<"-1\n";
                    return 0;
                }
            }
            else
                rs=sr[i];

        }


        d1=s-sr[r];
        d2=s-sc[c];
        d3=s-sdi;
        d4=s-sdj;

        cout<<d1<<d2<<d3<<d4<<cs<<endl;

        if((r+c == n-1) && (d1==d2 && d2==d4 && d1+sdj == sdi) && !(r==c))
            cout<<d1<<endl;
        else if(( r==c ) && (d1==d2 && d2==d3 && d1+sdi == sdj) && !(r+c == n-1))
            cout<<d1<<endl;
        else if( (r+c == n-1) && ( r==c ) && d1==d2 && d3==d4 && d1==d4 )
            cout<<d1<<endl;
        else if( d1 == d2 && d1 > 0 && sdi==sdj && sr[r]+d1==sdi && sc[c]+d2==sdj )
            cout<<d1<<endl;
        else
            cout<<"-1"<<endl;

    }
    return 0;
}
