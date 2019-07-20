#include<stdio.h>
int main()
{
    int a[10],i,e_count,o_count,p_count,n_count;

    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    e_count=o_count=p_count=n_count=0;

    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
            e_count++;
        if(a[i]%2==1)
            o_count++;
        if(a[i]>0)
            p_count++;
        if(a[i]<0)
            n_count++;
    }
    printf("%d%d%d%d",e_count,o_count,p_count,n_count);

    return 0;
}
