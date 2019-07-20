#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,t0=180000,t10=300000,t15=400000,t20=300000;
    unsigned int k;
    float x;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%ud",&k);
        if(k>t0 && k<=(t0+t10))
        {
            x=(k-t0)*.10;
            {
                if(x>0 && x<=2000)
                    printf("Case %d: 2000",i);
                else
                    printf("Case %d: %.0f",i,ceil(x));
            }
        }
        else if(k>(t0+t10) && k<=(t0+t10+t15))
        {
            x=((k-t0-t10)*.15)+(t10*.10);
            printf("Case %d: %.0f",i,ceil(x));
        }
        else if(k>(t0+t10+t15) && k<=(t0+t10+t15+t20))
        {
            x=((k-t0-t10-t15)*.20)+(t10*.10)+(t15*.15);
            printf("Case %d: %.0f",i,ceil(x));
        }
        else if(k>(t0+t10+t15+t20))
        {
            x=((k-t0-t10-t15-t20)*.25)+(t10*.10)+(t15*.15)+(t20*.20);
            printf("Case %d: %.0f",i,ceil(x));
        }
        else
        {
            printf("Case %d: 0",i);
        }
        printf("\n");
    }
    return 0;
}
