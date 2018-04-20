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
int main()
{
    char s1[30],s2[30];
    int i,t1,t2,l1,l2,a1,a2;
    double ans;
    while(gets(s1))
    {
        gets(s2);
        a1=0;
        a2=0;
        t1=0;
        t2=0;
        l1=strlen(s1);
        l2=strlen(s2);
        for(i=0; i<l1; i++)
        {
            if(s1[i]>='A' && s1[i]<='Z')
                t1+=s1[i]-64;
            else  if(s1[i]>='a' && s1[i]<='z')
                t1+=s1[i]-96;
        }
        for(i=0; i<l2; i++)
        {
            if(s2[i]>='A' && s2[i]<='Z')
                t2+=s2[i]-64;
            else  if(s2[i]>='a' && s2[i]<='z')
                t2+=s2[i]-96;
        }
        while(t1!=0)
        {
            a1+=t1%10;
            t1/=10;
        }
        while(t2!=0)
        {
            a2+=t2%10;
            t2/=10;
        }
        if(a1<=9)
            a1=a1;
        else
            a1=a1-9;
        if(a2<=9)
            a2=a2;
        else
            a2=a2-9;
        if(a1<a2)
            ans=(double)a1/a2*100;
        else
            ans=(double)a2/a1*100;
        printf("%.2lf %%\n",ans);
    }
    return 0;
}
