/**
    Team    : IIUC Debug & Conquer
**/
#include<bits/stdc++.h>
using namespace std;

#define PI acos(0)
#define inf 100000000
#define EPS 1e-9
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
//#define mod 1000000007

int main()
{
    int  t,j,a[4],b[4],c[4],e[4],d[4];
    scanf("%d",&t);
    for(j=1; j<=t; j++)
    {
        int f=0,T=0,i=0, w=0;
        cin>>a[0]>>a[1]>>a[2];
        cin>>b[0]>>b[1]>>b[2];
        cin>>c[0]>>c[1]>>c[2];
        cin>>e[0]>>e[1]>>e[2];
        cin>>d[0]>>d[1]>>d[2];

        for(int i=0; i<4 ; i++)
        {
            if(a[i]-d[i] == 0 || b[i]-d[i]==0 || c[i]-d[i]==0 || e[i]-d[i]==0)

                {
                    T=1;
                }
            else if(a[i]-d[i]>0 || b[i]-d[i]>0 || c[i]-d[i]>0 || e[i]-d[i]>0)
                {
                    w=1;
                }
            else if(a[i]-d[i]<0 || b[i]-d[i]<0 || c[i]-d[i]<0 || e[i]-d[i]<0)
                {
                    i=1;
                }

        }
        if(T==1)
            printf("Case #%d: TRIANGLE\n",j);
        else if(i==1)
            printf("Case #%d: INSIDE\n",j);
        else if(w==1)
            printf("Case #%d: OUTSIDE\n",j);



    }

    return 0;
}
