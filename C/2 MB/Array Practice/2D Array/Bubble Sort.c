/*7. Write a program to sort n numbers using Bubble Sort algorithm.*/

#include <stdio.h>

int main()
{
    int i, j,temp,n,a[80];
    printf("How many elements:\n\n");
    scanf("%d",&n);

    printf("Enter elements as integer numbers:\n\n");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("After sorting with Bubble Sort:\n\n");
    for(i=1;i<=n;i++)
        printf("%d ",a[i]);
    return 0;
}
