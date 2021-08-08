#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000],ch,x,y,*p;

    int n,m,i,k,j;

    while(scanf("%d%d",&n,&m)==2)
    {


        scanf("%s",str);



        for(j=0; j<m; j++)
        {
            scanf(" %c %c",&x,&y);
            k=0;

            while(k<n)
            {
                ch=str[k];

                if(ch==x)
                {
                    p=&str[k];
                    (*p)=y;
                }
                else if(ch==y)
                {
                    p=&str[k];
                    (*p)=x;

                }

                k++;
            }

        }
        puts(str);
    }
    return 0;
}
