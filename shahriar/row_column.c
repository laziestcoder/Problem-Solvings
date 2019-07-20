#include<stdio.h>
int main()
{
    int col=0,i=0,j=0;
    printf("Square matrics size: ");
    scanf("%d",&col);
    int mosha[col][col];
    for(i=1;i<=col;i++)
    {
        for(j=1;j<=col;j++)
            {scanf("%d",&mosha[i][j]);}
    }
    for(i=1;i<=col;i++)
    {
        for(j=1;j<=col;j++)
            printf("%d ",&mosha[i][j]);
            printf("\n");

    }
}
