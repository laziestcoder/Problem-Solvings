#include<stdio.h>



int main ()
{
    int w=0,h=0,i=0,j=0,coun=0,x=0,y=0,c=0,p,e;
    char a[12][12]= {0};
    scanf("%d%d",&w,&h);
    for(i=1; i<=w; i++)
    {
        for(j=1; j<=h; j++)
        {
            scanf("%c",&a[i][j]);
        }
    }
    coun=0;
    for(x=1; x<=w; x++)
    {
        for(y=1; y<=h; y++)
        {

            if(a[x][y]=='R')
            {
                for(c=y; c<=w; c++)
                {
startR:
                    if(a[x][c]=='*')
                    {
                        c=c-1;
                        y=c;
                        goto start;
                    }
                    else if('.')
                        coun++;
                    printf("R%d\n",coun);
                }
                goto startD;
            }
            else if(a[x][y]=='D')
            {
                for(c=x; c<=h; c++)
                {
startD:
                    if(a[c][y]=='*')
                    {
                        c=c-1;
                        x=c;
                        goto start;
                    }
                    else if('.')
                        coun++;
                    printf("D%d\n",coun);
                }
                goto startL;
            }
             else if(a[x][y]=='L')
            {

                for(c=y; c>=1; c--)
                {
startL:
                    if(a[x][c]=='*')
                    {
                        c=c-1;
                        y=c;
                        goto start;
                    }
                    else if('.')
                        coun++;

                    printf("L%d\n",coun);
                }goto startU;
            }

            else if(a[x][y]=='U')
            {

                for(c=x; c>=1; c--)
                {
startU:
                    if(a[c][y]=='*')
                    {
                        c=c-1;
                        x=c;
                        goto start;
                    }
                    else if('.')
                        coun++;
                    printf("U%d\n",coun);
                }
                goto startR;
            }




            else if(a[x][y]=='.')
            {
                coun++;
                printf("Coun...%d\n",coun);
            }
            else if(a[x][y]=='*')
            {
                c++;
            }
        }
    }

start:
    printf("%d\n",coun);

    return 0;
}
