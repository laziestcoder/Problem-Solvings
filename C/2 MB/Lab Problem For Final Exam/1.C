#include<stdio.h>
int main()
{
    int std[100][4],i,j,range,v=0;
    printf("How many data:");
    scanf("%d",&range);
    for(i=0;i<range;i++)
    {
        printf("--Start new student data input--\n");
        for(j=0;j<4;j++)
        {
            printf("Enter the value(Roll,P,M,C):");
            scanf("%d",&std[i][j]);
        }
        v++;
        if(v==range)
                break;
    }
    for(i=0;i<range;i++)
    {
        printf("\nRoll=%d,Physics=%d,Math=%d,Chemistry=%d",std[i][0],std[i][1],std[i][2],std[i][3]);

    }
    return 0;
}
