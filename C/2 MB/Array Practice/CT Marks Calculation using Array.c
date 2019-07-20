#include<stdio.h>

int main()
{
    int ct_1[2],ct_2[2],ct_3[2],total[2],i;

    for(i=0;i<2;i++)
    {
        scanf("%d",&ct_1[i]);
    }
    for(i=0;i<2;i++)
    {
        scanf("%d",&ct_2[i]);
    }
    for(i=0;i<2;i++)
    {
        scanf("%d",&ct_3[i]);
    }
    for(i=0;i<2;i++)
    {
        total[i]=ct_1[i]+ct_2[i]+ct_3[i];
    }
    for(i=0;i<2;i++)
    {
        printf("\n%d\n",total[i]);
    }

    return 0;
}
