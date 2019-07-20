#include<cstdio>

int main()
{

    long long arr[100005],brr[1010],ans[100];
    long long int t,n,k,i,j,l,m,take,take2,min,max,a,b,y,x,totalmax;


    scanf("%lld",&t);


    for(i=1; i<=t; i++)
    {

        scanf("%lld",&n);

        max=1;

        m=1;

        for(j=1; j<=n; j++)
        {
            scanf("%lld%lld",&a,&b);
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


        }

        totalmax=0;

        for(y=1; y<=n; y++)
        {
            if(ans[y]>totalmax)
            {
                totalmax=ans[y];
            }

        }
        printf("Case %lld: %lld\n",i,totalmax);
    }

    return 0;
}
