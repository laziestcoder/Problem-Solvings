#include<stdio.h>
#include<time.h>
int main()
{
    int i,j,D[10];
    srand(time(0));
    printf("random numbers:\n");
    for(i=1; i<=4; i++)
    {
        D[i]=rand()%9;
    }
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(i==j)
                continue;
            if(D[i]==D[j])
            {
                D[j]=rand()%9;
            }
        }
    }
    for(i=1;i<=4;i++)
    {
        printf("%d ",D[i]);
    }
    getch();
    return 0;
}
