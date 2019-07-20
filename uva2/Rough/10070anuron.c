#include<stdio.h>
#include<string.h>
int main(void)
{
    ///freopen("10070in.txt", "r", stdin);
    ///freopen("10070outanuron.txt", "w", stdout );
    char y[100001];
    int m4,m100,m400,m15,m55,i,l,count=0;
    while (scanf("%s",&y)==1)
    {
        m4=0;
        m100=0;
        m15=0;
        m55=0;
        m400=0;
        if (count>0)
            printf("\n");
        count++;
        l=strlen(y);
        for (i=0;i<l;i++)
        {
            m4=(m4*10+y[i]-'0')%4;
            m55=(m55*10+y[i]-'0')%55;
            m15=(m15*10+y[i]-'0')%15;
            m100=(m100*10+y[i]-'0')%100;
            m400=(m400*10+y[i]-'0')%400;
        }
        if ((!m4 && m100) || !m400)
        {
            printf("This is leap year.\n");
            if (!m15)
                printf("This is huluculu festival year.\n");
            if (!m55)
                printf("This is bulukulu festival year.\n");
        }
        else
        {
            if (!m15)
                printf("This is huluculu festival year.\n");
            else
                printf("This is an ordinary year.\n");
        }
    }
    return 0;
}

