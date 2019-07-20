#include<stdio.h>
int s;
int main ()

{
    int x,n=10,i;
    //scanf("%d",&n);
    s=0;
    for(i=2; i<=n; i=i+2)
    {

        s=s+i;
        printf("%d\n",i);
    }
    printf("%d\n",s);
    getch();
    return 0;
}
sum ()
{
    printf("%d",s);
}



