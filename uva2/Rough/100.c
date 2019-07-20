#include<stdio.h>
int main ()
{
    int i,j,ci,cj,x,y,a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        ci=0;   // cj=0; y=1;
        /*i=a;    j=b;*/
        for(j=a; j<=b; j++)

        {
            x=1;
            while(x)
            {
                i=j;
                ci++;
                if(i>1 && i%2!=0)
                {
                    i=(3*i)+1;
                }
                else if (i>1 && i%2==0)
                {
                    i=i/2;
                }
                else if(i==1)
                {
                    x=0;
                }


            }
        }
        /*while (y)
        {
            cj++;
            if(j==1)
                y=0;
            else if(j>1 && j%2!=0)
                j=(3*j)+1;
            else if (j>1 && j%2==0)
                j=j/2;

        }*/
        printf("%d %d %d\n",a,b,ci);
    }
    return 0;
}
