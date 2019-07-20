#include <iostream>
#include <ctime>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int x[4],no[4],a=0,f[4],d[4];
    int i,j;
    srand(time(0));
    for(i=0; i<4; i++)
    {
        x[i]=rand()%9;
        f[i]=0;
        d[i]=0;
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==j)
                continue;
            if(x[i]==x[j])
            {
                x[j]=rand()%9;
                j--;
            }
        }
    }
    //printf("%d %d %d %d",x[0],x[1],x[2],x[3]);
    printf("lets play a game\n :press enter after every line:");
    getchar();
    printf("i have gused a 4 digit number.\n");
    getchar();
    printf("you have to tell what is it.....\n");
    getchar();
    printf("in the number no digit is repeated.\n give me 4 digit with space like 1 2 3 4\n ");
    for(int we=0; we<5; we++)
    {
        for(int i=0; i<4; i++)
        {
            scanf("%d",&no[i]);
        }
        for(int i=0; i<4; i++)
        {
            if(no[i]==x[i])
            {
                printf("%d is in the right position\n",no[i]);
                f[i]=1;
            }
        }
        for(int i=0; i<4; i++)
        {
            for(int q=0; q<4; q++)
            {
                if(no[i]==x[q]&&f[i]==0)
                {
                    printf("%d is a valid digit but not in a valid position\n",no[i]);
                    d[i]=1;
                }
            }
        }
        for(int i=0; i<4; i++)
        {
            if(d[i]==0&&f[i]==0)
            {
                printf("%d is not a valid digit\n",no[i]);
            }
        }

        if(no[0]==x[0]&&no[1]==x[1]&&no[2]==x[2]&&no[3]==x[3])
        {
            printf("congo you gused it!!!!\n");
            break;
        }
        else
        {
            printf("try again\n");
        }
        if(we==4)
        {
            printf("sorry you faild\n");
        }

    }



    return 0;
}
