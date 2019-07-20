
03
Sep
10
[UVa] 10699 – Count the Factors
By Tafhim Leave a Comment
Categories: Programming and UVa Solutions

It’s a slight modification of the code I used for 583. Simple enough.


#include <stdio.h>
#include <math.h>
#include <string.h>
int primes[7000];
bool marks[60000];


int sieve2(int n)
{

    int i, j, k;

    memset(marks,true,n);

    marks[0] = marks[1] = false;

    for (i=4 ; i<n ; i+=2)
        marks[i]=false;

    for (i=3 ; i*i<n ; i+=2)
    {
        if (marks[i]==true)
        {
            for (j=i*i ; j<n ; j+=(2*i))
                marks[j]=false;
        }

    }

    for (i=2, j=0 ; i<=n ; i++)
    {
        if (marks[i]==true)
        {
            primes[j++]=i;
        }
    }

    return j-1;

}

int main() {

    int i, j, kounter=0, q;
    int mark=sieve2(50000);


    while (scanf("%d",&q) && q)
    {

        kounter=0;

        printf("%d : ",q);

        for (j=0 ; primes[j]<q && j<mark ; j++)
        {
            if (q%primes[j]==0) kounter++;
            while (q%primes[j]==0)
            {
                q/=primes[j];
            }
        }

        if (q>1)
            kounter++;

        printf("%d\n",kounter);
    }
    return 0;
}

03
Sep
10
[UVa] 10789 – Prime Frequency
By Tafhim Leave a Comment
Categories: Programming and UVa Solutions

I tried to solve this problem at the very start of my UVa solving sessions. Then I used a stupid method, bubble sort, non sieve etc. Well, that’s what you call improvement I guess, solving it the smarter way.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

bool prime[3000];
char input[2005];
int gen(int n)
{
    int i, j;

    memset(prime,true,n);

    prime[0] = prime[1] = false;

    for (i=4 ; i<n ; i+=2)
        prime[i]=false;

    for (i=3 ; i*i<n ; i+=2)
    {
        if (prime[i]==true)
        {
            for (j=i*i ; j<n ; j+=(2*i))
            {
                prime[j]=false;
            }
        }
    }
    return 0;
}

int cmp(const void *a, const void *b)
{
    return (*(const char *)a-*(const char *)b);
}


int main()
{
    gen(3000);

    int t, i, j, kounter=1, len, val=0;

    scanf("%d",&t);

    while (t--)
    {
        scanf("%s",input);
        printf("Case %d: ",kounter++);

        len=strlen(input);
        val=0;

        qsort(input,len,sizeof(char),cmp);

        for (i=0 ; i<len ; )
        {
            for (j=i ; input[j]==input[i] ; j++);
            if (prime[j-i]==true)
            {
                printf("%c",input[i]);
                val++;
            }

            i=j;
        }

        if (!val)
            printf("empty");

        printf("\n");
    }
    return 0;
}

03
Sep
10
[UVa] 350 – Pseudo Random Numbers
By Tafhim Leave a Comment
Categories: Programming and UVa Solutions

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

03
Sep
10
Linkin Park – The Catalyst
By Tafhim Leave a Comment
Categories: Music

An awesome song and as always, an awesome video from LP. I just love it. An official HD version is available at the “linkinparktv” YouTube channel. 1080p version is mind blowing.
03
Sep
10
[UVa] 583 – Prime Factors
By Tafhim Leave a Comment
Categories: Programming and UVa Solutions

All that is gonna keep you from solving this is some TLE, RTE and maybe a bit WA ‘cuz of impatient carelessness to higher bounds. Generate a prime table using a sieve. Then do just what you have to do. Don’t wanna explain the outputs here, see the code.

Just test it with these inputs before submitting:

    2147483647
    -2147483647

Output will be:

    2147483647 = 2147483647
    -2147483647 = -1 x 2147483647


#include <stdio.h>
#include <math.h>
#include <string.h>
int primes[7000];
bool marks[60000];


int sieve2(int n)
{

    int i, j, k;

    memset(marks,true,n);

    marks[0] = marks[1] = false;

    for (i=4 ; i<n ; i+=2)
        marks[i]=false;

    for (i=3 ; i*i<n ; i+=2)
    {
        if (marks[i]==true)
        {
            for (j=i*i ; j<n ; j+=(2*i))
                marks[j]=false;
        }

    }

    for (i=2, j=0 ; i<=n ; i++)
    {
        if (marks[i]==true)
        {
            primes[j++]=i;
        }
    }

    return j-1;

}

int main() {

    int i, j, q;
    int mark=sieve2(60000);


    while (scanf("%d",&q) && q)
    {

        printf("%d =",q);

        if (q<0)
        {
          printf(" -1 x");
          q=-q;
        }

        if (q==1)
        {
            printf(" 1\n");
            continue;
        }

        for (j=0 ; primes[j]<q && j<mark ; j++)
        {
            while (q%primes[j]==0)
            {
                q/=primes[j];
                if (q>1)printf(" %d x",primes[j]);
                else printf(" %d",primes[j]);

            }
        }

        if (q>1)
            printf(" %d",q);

        printf("\n");
    }



    return 0;

}

02
Sep
10
[UVa] 612 – DNA Sorting
By Tafhim Leave a Comment
Categories: Programming and UVa Solutions

Very simple if you think with Structures and stdlib’s qsort. Nothing can beat you. No blank line at the end and this is counting your solved list up.


#include "stdio.h"
#include "string.h"
#include "stdlib.h"

typedef struct th {
    char word[55];
    int sort;
} DNA;

DNA str[110]={0,0};

int cmp(const void *a, const void *b) {
    return (((DNA *)a)->sort-((DNA *)b)->sort);
}

int main() {

    int i, j, k, t, n, m;
    char blank[10];

    scanf("%d",&t);
    getchar();

    while (t--) {
        gets(blank);
        scanf("%d %d",&n,&m);

        for (i=0 ; i<m ; i++) {
            str[i].sort=0;
            scanf("%s",str[i].word);

            for (j=0 ; j<n ; j++) {
                for (k=j+1 ; k<n ; k++) {
                    if (str[i].word[j]>str[i].word[k]) {
                        str[i].sort++;
                    }
                }
            }
        }
        qsort(str,m,sizeof(DNA),cmp);
        for (i=0 ; i<m ; i++) {
            printf("%s\n",str[i].word);
        }
        if (t) printf("\n");
        getchar();
    }


    return 0;

}

02
Sep
10
[UVa] 621 – Secret Research
By Tafhim Leave a Comment
Categories: Programming and UVa Solutions

After getting used to so many critical problems in UVa, you simply can’t take this so simply while it is one of the silliest problems. Even the exception condition doesn’t really needs a care.


#include "stdio.h"

int main() {

    int n, len;
    char in[10010];

    scanf("%d",&n);

    while(n--) {
        scanf("%s",in);
        if (!strcmp(in,"1") || !strcmp(in,"4") || !strcmp(in,"78"))
            printf("+");
        else {
            len=strlen(in);
            if (in[len-2]=='3' && in[len-1]=='5') printf("-");
            else if (in[0]=='9' && in[len-1]=='4') printf("*");
            else if (in[0]=='1' && in[1]=='9' && in[2]=='0') printf("?");
        }
        printf("\n");
    }

    return 0;

}
