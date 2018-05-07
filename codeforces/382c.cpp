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
#define r return
#define ll long long
/*#ifdef
    #define input freopen("in.txt","r",stdin)
    #define output    //freopen("in.txt","w",stdin);
#endif //lc
*/
int main ()
{
    //lazycoder;
    long long int i,n,f[1000];
    cin>>n;
    f[0]=1;
    f[1]=2;
    for(i=2;i<=1000;i++)
    {
        f[i]=f[i-1]+f[i-2];
        if(f[i]>n)
            {
                cout<<i-1<<endl;
                r 0;
            }
    }
    if(n==1)
        cout<<1<<endl;
        r 0;

}
