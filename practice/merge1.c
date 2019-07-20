#include<stdio.h>
#include<time.h>
#include<math.h>
int A[100006];
int merge_sort(int p,int r)
{
    int q;
    if(p<r)
    {
        q=((p+r)/2);
        merge_sort(p,q);
        merge_sort(q+1,r);
        merge_(p,q,r);
    }
}
int merge_(int p,int q,int r)
{
    int n1,n2,l[100006],r2[100008],k,x,y;
    n1=q-p+1;
    n2=r-q;
    for(x=1; x<=n1; x++)
    {
        l[x]=A[p+x-1];
    }
    for(y=1; y<=n2; y++)
    {
        r2[y]=A[q+y];
    }
    l[n1+1]=6668888;
    r2[n2+1]=666888;
    x=1;
    y=1;
    for(k=p; k<=r; k++)
    {
        if(l[x]<=r2[y])
        {
            A[k]=l[x];
            x=x+1;
        }
        else
        {
            A[k]=r2[y];
            y=y+1;
        }
    }
}
int main()
{
    int i;
    int p=1;
    int r;
    double t;
    clock_t start,end;
    srand(time(NULL));
    printf("How many numbers:");
    scanf("%d",&r);
    for(i=p; i<=r; i++)
    {
        A[i]=rand()%100;
    }
    printf("\n\nBefore sort:\n");
    for(i=p; i<=r; i++)
    {
        printf("%d ",A[i]);
    }
    start=clock();
    merge_sort(p,r);
    end=clock();
    printf("\n\nAfter sort:\n");
    for(i=p; i<=r; i++)
    {
        printf("%d ",A[i]);
    }
    t=(double)(end-start)/CLOCKS_PER_SEC;
    printf("\n[[t=%f]]\n",t);
    return 0;
}
