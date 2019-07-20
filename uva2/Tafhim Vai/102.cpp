#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    char comb[6][4]={"BCG","BGC","CBG","CGB","GBC","GCB"};
    long int input[9]={0}, i=1, count=0, mincount=999999999, com;

    while (scanf("%ld",&input[i])==1)
    {
        for (i=2 ; i<=9 ; i++)
        {
            scanf("%ld",&input[i]);
        }

        for (i=0, count=0 ; i<6 ; i++)
        {
            if (comb[i][0]=='B')
            {
                if (comb[i][1]=='C')
                {
                    count=input[4]+input[7]+input[3]+input[9]+input[2]+input[5];
                } else
                {
                    count=input[4]+input[7]+input[2]+input[8]+input[3]+input[6];
                }
            } else if (comb[i][0]=='C')
            {
                if (comb[i][1]=='B')
                {
                    count=input[6]+input[9]+input[1]+input[7]+input[2]+input[5];
                } else
                {
                    count=input[6]+input[9]+input[2]+input[8]+input[1]+input[4];
                }
            } else if (comb[i][0]=='G')
            {
                if (comb[i][1]=='B')
                {
                    count=input[5]+input[8]+input[1]+input[7]+input[3]+input[6];
                } else
                {
                    count=input[5]+input[8]+input[3]+input[9]+input[1]+input[4];
                }
            }

            if (count<mincount)
            {
                mincount=count;
                com=i;
                count=0;
            }
        }

        printf("%s %ld\n",comb[com],mincount);

        i=1;
        mincount=999999999;
    }

    return 0;
}
