#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,b,h,w,i,j,sum,mx,f,p,a;
    while(scanf("%d%d%d%d",&n,&b,&h,&w)==4)
    {
        mx=1e9;
        sum=0;
        f=0;
        for(i=0; i<h; i++)
        {
            scanf("%d",&p);
            sum=p*n;
            for(j=0; j<w; j++)
                {
                    scanf("%d",&a);
                    if(a>=n && sum<=b )
                    {
                        f=1;
                        if(mx>=sum)
                            mx=sum;
                    }
                }
        }

        if(f==0)
            cout<<"stay home\n";
        else
            cout<<mx<<endl;
    }
    return 0;
}
