I don’t know if there’s a better solution, apparently one that generates the numbers in runtime. I precomputed the numbers and printed them based on the querry. To generate the numbers, just uncomment the main() function block.

#include <cstdio>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>
using namespace std;

char res[10], init[10];

char * stradd(char *a, char *b, char *fin)
{

    int i, j, k, car, cur;
    i=strlen(a)-1;
    j=strlen(b)-1;
    k=0;
    for (cur=0, car=0 ; i>=0 || j>=0 ; i--, j--, k++)
    {
        cur = (i>=0?a[i]-'0':0) + (j>=0?b[j]-'0':0) + car;
        car = 0;

        if (cur<=9)
        {
            res[k]=cur+'0';
            car=0;
        } else
        {
            res[k]=(cur-10)+'0';
            car=1;
        }

    }
    if (car==1)
    {
        res[k++]='1';
    }
    for (--k, i=0 ; k>=0 ; i++, k--)
    {
        fin[i]=res[k];
    }
    fin[i]='';

    return fin;
}

char two[10][10]={"00","01","81"};
char four[10][10]={"0000","0001","2025","3025","9801"};
char six[10][10]={"000000",
"000001",
"088209",
"494209",
"998001"};
char eight[10][10]={"00000000",
"00000001",
"04941729",
"07441984",
"24502500",
"25502500",
"52881984",
"60481729",
"99980001"};

int main()
{


    /*int x, y, z;
    char temp;
    strcpy(init,"00000000");
    while (strcmp("100000000",init))
    {
        temp = init[4];
        init[4]='';
        x = atoi(init);
        init[4]=temp;

        y = atoi(&init[4]);
        z = atoi(init);
        if (pow(x+y,2)==z)
            printf("--> %s\n",init);

        stradd(init,"1",init);
    }*/
    int i, q;

    while (scanf("%d",&q)!=EOF)
    {
        if (q==2)
        {
            for (i=0 ; i<3 ; i++)
            {
                printf("%s\n",two[i]);
            }
        } else if (q==4)
        {
            for (i=0 ; i<5 ; i++)
            {
                printf("%s\n",four[i]);
            }
        } else if (q==6)
        {
            for (i=0 ; i<5 ; i++)
            {
                printf("%s\n",six[i]);
            }
        } else if (q==8)
        {
            for (i=0 ; i<9 ; i++)
            {
                printf("%s\n",eight[i]);
            }
        }
    }
    return 0;

}

