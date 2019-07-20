#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    k = n;
    //for(i=0;i<1;i++)
    //{
        for(j=n;;j--)
        {
            printf("*");
            //printf("\n");
            //k--;
            if(j==0)
                break;
        }
        //printf("*");
        /*for(j=0;j<n-1;j++)
            printf("*");
            printf("\n");
        for(k=0;k<1;k++)
            printf("*");*/
    //}


    /*for(j=0;j<n-1;j++)
        printf("*");
        printf("\n");
    for(k=0;k<n-2;k++);
        printf("*");*/
    return 0;
}
