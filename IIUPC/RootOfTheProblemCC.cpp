#include<bits/stdc++.h>
using namespace std;
#define lld long long
lld int mypo(lld int x,lld int y)
{
    lld int j,z=1;
    if(y==0)
        return 1;
    else
    {
        for(j=1; j<=y; j++)
        {
            z*=x;
        }
        return z;
    }
}

int main ()
{
    freopen("cin.txt","r",stdin);
    lld int b,n,a,chk1,chk2,f1=0,f2=0,i,mx=0,mn=0;
    cin>> b>>n;
    while(1)
    {
        if(b==0 && n==0 )
            return 0;
        f1=0;
        f2=0;
        mx=0;
        mn=0;
        for(i=1; ; i++)
        {
            a=mypo(i,n);
            if(a>b)
            {
                mx=a;
                f1=1;
            }
            else if(a<b)
            {
                mn=a;
                f2=1;
            }
            if(f1==1 && f2==1)
            {
                chk1=b-mn;
                chk2=mx-b;
                if(chk1>chk2)
                    {
                        cout<< "mx" <<mx<<"\n";
                        getchar();
                    }
                else
                    {
                        cout<< "mn" <<mn<<"\n";
                        getchar();
                    }

                break;
            }

        }

    }


    return 0;
}
