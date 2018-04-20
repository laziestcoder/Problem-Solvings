#include<stdio.h>

int main ()
{
    long long int i,k,l,L,h,H,s,m,v;
    while(scanf("%lld%lld",&L,&H)==2)
    {

        if(L==0 && H==0)
            return 0;

        if(L>H)
        {
            l=H;
            h=L;
        }
        else
        {
            l=L;
            h=H;
        }


        m=0;
        v=h;

        for(i=h; i>=l; i--)
        {
            s=0;
            k=i;

            if(i==1)
                {
                    k=(k*3)+1;
                    s=1;
                }
            while(k>1)
            {
                if(k%2==0)
                    k=k/2;
                else if(k%2!=0)
                    k=(k*3)+1;
                s++;
            }
            if(s>=m)
            {
                m=s;
                if(i<v)
                {
                    v=i;
                }
            }


        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",l,h,v,m);
    }
    return 0;
}
