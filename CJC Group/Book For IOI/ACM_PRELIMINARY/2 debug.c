#include<cstdio>

int main()
{
    int t,n,k,i,j,l,m,arr[100],brr[100],take,take2,min,max,a,b,y,x,ans[100],totalmax;


    scanf("%d",&t);


    for(i=1; i<=n; i++)
    {

        scanf("%d",&n);


        max=1;

        m=1;

        for(j=1; j<=n; j++)
        {
            scanf("%d%d",&a,&b);
            arr[j]=a;
            if(j==1)
            {
                min=b;
            }

            brr[j]=b;

            if(b<min)
            {
                min=b;
            }
            if(b>max)
            {
                max=b;
            }
        }

        //printf("min= %d and max=%d\n",min,max);

        take2=0;

        while(take2<=n)
        {
            take2++;
            take=0;
            for(k=1; k<=n; k++)
            {
                take=take+(arr[k]*min);
            }

            ans[m]=take;

            //printf("ans[%d]=%d\n",m,ans[m]);

            m++;

            for(l=1; l<=n; l++)
            {

                if(brr[l]==min)
                {
                    arr[l]=0;
                    brr[l]=0;
                }
            }
            min=max;

            for(x=1; x<=n; x++)
            {
                if(brr[x]<min&&brr[x]!=0)
                {
                    min=brr[x];
                }
            }
            //printf("next min=%d\n",min);

        }
        //printf("ans is --.\n");

        totalmax=0;

        for(y=1;y<=n;y++)
        {
            if(ans[y]>totalmax)
            {
                totalmax=ans[y];
            }

        }
        printf("Case %d: %d\n",i,totalmax);
    }

    return 0;
}
