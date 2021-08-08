#include<stdio.h>
int main ()
{
    long long int n,x,y,z,;
    int t,c;
    scanf("%d",&t);
    c=0;
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&n);
        if(n>=3)
        {
            x=n/2;
            y=x-1;
            z=y-x;



            if(n%3==0)
                c++;
            else if(( x>0 && y>0 && z>0) && (x+y+z)==n && ( x>(y+z) ||  y>(x+z) || z>(y+x) ))
                c++;
            else if( ( x>0 && y>0 && z>0) && (x+y+z)==n && x==y==z )
                c++;
            else if ( ( x>0 && y>0 && z>0) && (x+y+z)==n && (x==y || x==z || z==y )
                      c++;

        }



    printf("%d\n",c);
    }
    return 0;
}
