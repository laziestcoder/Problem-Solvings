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
int c,i,l[10000],st=0;
char s[1000000];
int strdig()
{
    int j,ans=0;
    for(j=strlen(s)-1,i=1; j>=0; j--,i=i*10)
    {
        st=(s[j]-'0')*i;
        ans+=st;
    }
    return ans;
}

int nofd()
{
    if(l[c]==l[c-1] && c>0)
    {
        i=c;
        c=0;
        cout<<i<<endl;
    }
    else
    {
        c++;
        l[c]=log10(l[c-1])+1;
        nofd();

    }
}


int main ()
{
    while(1)
    {
        cin>>s;
        if(s[0]=='E')
            return 0;
        else
        {
            c=0;
            l[c]=strdig();
            c=1;
            l[c]=strlen(s);
            nofd();
        }
    }
}
