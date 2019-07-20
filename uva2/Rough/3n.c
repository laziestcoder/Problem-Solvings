#include<stdio.h>
int main ()
{
   int c=0,n=2,i=0,j=0,k,m=0;
   while(scanf("%d%d",&i,&j)!=EOF)
{
            m=0;

            for(k=i; k<=j; k++)
            {
                c=0; n=2;


            while(n>1)
            {
                if(k==1 || k==0)
                    n=0;
                else if(k>1 && k%2!=0)
                        k=(k*3)+1;
                      else if(k>1 && k%2==0)
                            k=k/2;
                c++;
            }
            if(c>=m)
                m=c;
            }
            printf("%d %d %d\n",i,j,m);
}


return 0;
}
