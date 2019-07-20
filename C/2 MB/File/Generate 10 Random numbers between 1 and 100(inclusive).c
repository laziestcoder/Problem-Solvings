#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int i,x;
    srand(time (NULL));
    for(i=1;i<=10;i++)
    {
        x=rand()%100+1;
        printf("%d\n",x);
    }
    return 0;
}
