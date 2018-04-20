/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<"in "<<x<<endl;
#define sb '0'


int main ()
{
    int h=0,m=0,ss=0,sp=0,sp1=0;
    float d=0,t=0,t2=0;
    char s[13];
    while(scanf("%[^\n]",s)!=EOF)
    {
        getchar();

        h=(s[0]-sb)*10+(s[1]-sb);
        m=(s[3]-sb)*10+(s[4]-sb);
        ss=(s[6]-sb)*10+(s[7]-sb);

        if(s[8]!='\0')
        {
            if(s[11]!='\0')
            {
                sp=(s[9]-sb)*100+(s[10]-sb)*10+s[11]-sb;
            }
            else if(s[10]!='\0')
            {
                sp=(s[9]-sb)*10+s[10]-sb;
            }
            else
            {
                sp=s[9]-sb;
            }
        }
        t=h*1.0+(m*1.0)/60+((ss-1)*1.0)/3600;

        d=d+(sp1*abs(t-t2));

        if(s[8]=='\0')
        {


            if(floor(log10(h))+1<2)
                printf("0%d:",h);
            else
                printf("%d:",h);
            if(floor(log10(m))+1<2)
                printf("0%d:",m);
            else
                printf("%d:",m);
            if(floor(log10(ss))+1<2)
                printf("0%d",ss);
            else
                printf("%d",ss);
            printf(" %.2lf km\n",d);

        }
        t2=t;
        t=0;
        sp1=sp;
    }
    return 0;
}
