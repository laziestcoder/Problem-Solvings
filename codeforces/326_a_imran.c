#include<stdio.h>

int main()
{

    int n,i,p,save,a,preva,prevp;

    scanf("%d",&n);

    preva=0;
    prevp=0;
    for(i=0;i<n;i++)
    {


        scanf("%d%d",&a,&p);


        if(i==0)
        {
            save=(a*p);
           // printf("save=%d\n",save);

            preva=a;
            prevp=p;
            continue;

        }

        if(p<prevp)
        {

            save=save+(a*p);
            prevp=p;
            //printf("save=%d\n",save);

        }
        else
        {

            save=save+(a*prevp);
            //printf("save=%d\n",save);



        }

    }
    printf("%d",save);

    return 0;





}

