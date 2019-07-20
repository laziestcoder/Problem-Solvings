#include<bits/stdc++.h>
using namespace std;

#define M 1010
int pr[M];
bool marked[M];
void sieve2()
{
    long long int i,j;
    for (i = 2; i <=M; i++)
    {
        if (marked[i] == false)   // i is a prime
        {
            for (j = i + i; j <= M; j += i)
            {
                marked[j] = true;
            }
        }
    }
    j=1;
    memset(pr,0,sizeof(pr));
    for(i=1; i<=M; i++)
    {
        if(!marked[i])
        {
            pr[j]=i;
            j++;
        }
    }
}

int main()
{
    sieve2();
    int n,c,k=0;
    while(scanf("%d %d",&n,&c)==2)
    {
        int i=0,cn=0,j;
        cout<<n<<" "<<c<<":";
        for(i=1; pr[i]<=n; i++)
            cn++;
        int st=0,co=0;
        if(cn%2==0)
        {
            c=c*2;
            if(c>=cn)
                st=1;
            else
                  {
                      co=(cn/2);
                      st=co-((c/2)-1);
                  }
        }
        else if(cn%2!=0)
        {
            c=(c*2)-1;
            if(c>=cn)
                st=1;
            else
                {
                    co=(cn/2)+1;
                    st=co-(c/2);
                }
        }
        j=0;
        for(i=st; pr[i]<=n; i++)
        {
            cout<<" "<<pr[i];
            j++;
            if(j==c)
                break;
        }
        cout<<endl;
        k=1;
        if(k)
            cout<<endl;
    }
    return 0;
}
