Straightforward and simulation.


#include <stdio.h>

long int coll[10001]={0};

int main()
{

    long int z, i, m, l, p, f, next, s, cas=1;

    while (scanf("%ld %ld %ld %ld",&z,&i,&m,&l)==4)
    {

        p=0;
        f=0;

        if (z==0 && i==0 && m==0 && l==0)
            break;


        /***MAIN CODE***/

        while (1)
        {
            next = ((z*l)+i)%m;
            for (s=0 ; s<p ; s++)
            {
                if (coll[s]==next)
                {
                    f=1;
                    break;
                }
            }
            if (f) break;
            coll[p++]=next;
            l=next;
        }

        printf("Case %ld: %ld\n",cas++,p);

    }

    return 0;


}
