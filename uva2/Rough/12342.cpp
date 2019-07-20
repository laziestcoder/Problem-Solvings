#include<stdio.h>
#include<math.h>

int main ()
{
    int T,i;
    float t1,t2,t3,t4;
    double x;
    long long k,m0,m1,m2,m3,m4,m5,m6;
    m0=180000;
    t1=0.10;
    m1=300000;
    m4=m1+m0;
    t2=0.15;
    m2=400000;
    m5=m4+m2;
    t3=0.20;
    m3=300000;
    m6=m5+m3;
    t4=0.25;

    scanf("%d",&T);

    for(i=1; i<=T; i++)
    {
        scanf("%lld",&k);
        x=0.0;
        if(k<=m0)
        {

            x=0;
        }
        else if(k>m0 && k<=m4)
        {


           x =(k-m0)*t1;
           if(x<1) x=1;

        }
        else if(k>m4 && k<=m5)
        {
            x =(m1*t1);
            x=((k-m4)*t2)+floor(x);
        }
        else if(k>m5 && k<m6)
        {
            x=(m1*t1);
            x=(m2*t2)+floor(x);
            x=((k-m5)*t3)+floor(x);
        }
        else if(k>m6)
        {
            x =(m1*t1);
            x=(m2*t2)+floor(x);
            x=(m3*t3)+floor(x);
            x=((k-m6)*t4)+x;

        }
        if(x>0 && x<=2000)

          printf("Case %d: 2000\n",i,x);

        else

            {
                x=floor(x);
                printf("Case %d: %.0lf\n",i,x);
            }

    }

    return 0;
}
