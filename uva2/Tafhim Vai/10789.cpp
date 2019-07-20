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
