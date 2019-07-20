#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n, a,b,sum1=0,sum2=0,cn=0;
    scanf("%lld",&n);
    char c, s[1205] ;
    getchar();
    gets(s);
    for(int i=0; i < sizeof(s); i++)
    {
        c=s[i];
        if(c=='+')
        {
            if((s[i+2]>='0' && s[i+2]<='9' ) && ( s[i+3]>='0' && s[i+3]<='9' ) && ( s[i+4]>='0' && s[i+4]<='9') )
            {
                a=(s[i+2]-'0')*100+(s[i+3]-'0')*10+(s[i+4]-'0');
                i+=4;
            }
            else if((s[i+2]>='0' && s[i+2]<='9' ) && ( s[i+3]>='0' && s[i+3]<='9' ) )
            {
                a=(s[i+2]-'0')*10+(s[i+3]-'0');
                i+=3;
            }
            else if((s[i+2]>='0' && s[i+2]<='9' ))
            {
                a=(s[i+2]-'0');
                i+=2;
            }
            if(sum1-a == 0)
                {
                    cn++;
                    sum1-=a;
                }
            if(sum1+a > 300)
            {
                cn++;
                sum1-=a;
            }
            else
                sum1+=a;

        }
        else if(c=='-')
        {
            if((s[i+2]>='0' && s[i+2]<='9' ) && ( s[i+3]>='0' && s[i+3]<='9' ) && ( s[i+4]>='0' && s[i+4]<='9') )
            {
                a=(s[i+2]-'0')*100+(s[i+3]-'0')*10+(s[i+4]-'0');
                i+=4;
            }
            else if((s[i+2]>='0' && s[i+2]<='9' ) && ( s[i+3]>='0' && s[i+3]<='9' ) )
            {
                a=(s[i+2]-'0')*10+(s[i+3]-'0');
                i+=3;

            }
            else if((s[i+2]>='0' && s[i+2]<='9' ))
            {
                a=(s[i+2]-'0');
                i+=2;

            }
            if(sum1+a == 0)
            {
                cn++;
                sum1+=a;
            }
            if(sum1-a <0)
            {
                cn++;
                sum1+=a;
            }
            else
                sum1-=a;
        }
        else if(c>='0' && c<='9')
        {
           if((s[i]>='0' && s[i]<='9' ) && ( s[i+1]>='0' && s[i+1]<='9' ) && ( s[i+2]>='0' && s[i+2]<='9') )
            {
                a=(s[i+0]-'0')*100+(s[i+1]-'0')*10+(s[i+2]-'0');
                i+=2;
            }
            else if((s[i+0]>='0' && s[i+0]<='9' ) && ( s[i+1]>='0' && s[i+1]<='9' ) )
            {
                a=(s[i+0]-'0')*10+(s[i+1]-'0');
                i+=1;

            }
            else if((s[i+0]>='0' && s[i+0]<='9' ))
            {
                a=(s[i+0]-'0');
                i+=0;
            }


            if(sum1-a == 0)
                {
                    cn++;
                    sum1-=a;
                }
            if(sum1+a > 300)
            {
                cn++;
                sum1-=a;
            }
            else
                sum1+=a;
        }
    }
    /*
    while(n--)
    {
        scanf(" %c",&c);
        scanf("%lld",&a);
        if(c=='+')
        {
            if(sum1-a == 0)
                {
                    cn++;
                    sum1-=a;
                }
            if(sum1+a > 300)
            {
                cn++;
                sum1-=a;
            }
            else
                sum1+=a;

        }
        else if(c=='-')
        {
            if(sum1+a == 0)
            {
                cn++;
                sum1+=a;
            }
            if(sum1-a <0)
            {
                cn++;
                sum1+=a;
            }
            else
                sum1-=a;
        }

    }*/
    if(cn)
        cout<<cn<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
