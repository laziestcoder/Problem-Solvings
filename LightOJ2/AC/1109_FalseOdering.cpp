#include<bits/stdc++.h>
using namespace std;

int dss[1111]={0},dd[1111]={0},loc[1111]={0};
void di()
{
    int i,d=0,j;
    int mx=0,x;
    for(i=1; i <=1000; i++)
    {
        d=0;
        for(j=1; j*j<= i; j++)
        {
            if(j*j==i)
                d+=1;
            else if(i%j==0)
                d+=2;
        }
        dss[i]=d;
        dd[i]=d;
        if(mx<dss[i] && dss[i]<30 )
            {
                mx=dss[i];
                x=i;
            }
    }
    sort(dd,dd+i);
    for(i=0; i<=1000 ; i++)
    {
        for(j=1000; j>=0 ; j--)
        {

            if(dd[i]==dss[j] && dss[j]> 0)
            {
                loc[i]=j;
                dss[j]=-1;
                break;
            }

        }

    }
}


int main ()
{
    int t,i=0;
    di();
    cin>>t;

    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("Case %d: %d\n",++i,loc[n]);

    }

    return 0;
}

