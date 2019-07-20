#include<iostream>
#include<cstdio>
int main ()

{
    int n,a,b,c=0,d,i;
    scanf("%d%d%d",&n,&a,&b);
    if(b>0)
        d=1;
    else
        d=-1;
    for(i=a; c <(b*d) ;)
    {
        i=i+d;
        c++;
        if(i==0)
            i=n;
        if(i== n+1)
            i=1;
        if( c ==(b*d) )
            break;

        if(i==n)
        {
            i=1;
            c++;
            if( c ==(b*d) )
                break;
            i=i+d;
            c++;
            if( c ==(b*d) )
                break;
        }
        if(i==1)

        {
            i=n;
            c++;
            if( c ==(b*d) )
                break;
            i=i+d;
            c++;
            if( c ==(b*d) )
                break;
        }
    }
    printf("%d\n",i);
    return 0;
}
