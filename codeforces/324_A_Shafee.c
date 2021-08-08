#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,t,l,c;
    int s[105];
    while((scanf("%d %d",&n,&t))!=EOF)
    {
        i=1;
        while(1)
        {
            c=0;
            while(i!=0)
            {
                s[c]=i%10;
                i=i/10;
                //c++;
            }
            l=strlen(s);
            if(c==n)
            {
                if((i%t)==0)
                {
                    printf("%d\n",i);
                    //break;
                }
                else
                {
                    printf("-1\n");
                    //break;
                }
                break;
            }
            else
            {
                i++;
            }
        }
    }
}
