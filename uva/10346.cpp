/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

/*****
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,s,b,tb,r;
    while(scanf("%d%d",&n,&k)==2)
    {
        s=n;
        tb=0;
        while(s>=k)
        {
            b=s/k;
            r=s%k;
            s=b+r;
            tb=tb+b;
        }
        printf("%d\n",n+tb);
    }
    return 0;
}****/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,k;
    while(scanf("%d%d",&n,&k)==2 && k>1)
    {
        a=n;
        while(n>=k)
        {
            a=a+(n/k);
            n=(n/k)+(n%k);
        }
        printf("%d\n",a);
    }
    return 0;
}
