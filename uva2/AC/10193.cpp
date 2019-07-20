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
#define ll long long

ll int num[33] = {1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824,2147483648};


ll int stoint(string s)
{
    ll int i,j,sum=0;
    for(i=s.length()-1,j=0; i>=0; j++, i--)
    {
        if(s.length()-1 <2 )
            return 0;
        if(s[i]=='1')
        {
            sum=sum+num[j];
        }

    }
    return sum;
}

ll int exGCD(ll  int A, ll int B,ll int *X,ll int *Y ){
    ll int x, y, u, v, m, n, a, b, q, r;
    x = 0; y = 1;
    u = 1; v = 0;
    for (a = A, b = B; 0 != a; b = a, a = r, x = u, y = v, u = m, v = n) {
        q = b / a;
        r = b % a;
        m = x - (u * q);
        n = y - (v * q);
    }
    *X = x; *Y = y;
    return b;
}

ll int GCD(ll int a,ll int b)
{
    if(b > a)
        return GCD(b, a);

    if(b == 0)
        return a;
    else
        return GCD(b, a%b);
}

int main ()
{
    ll int sum1,sum2,i=0,f,t;
    string s1,s2;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {

        cin>>s1;
        cin>>s2;
        sum1=stoint(s1);
        sum2=stoint(s2);
        f=0;
        f=GCD(sum1,sum2); /********* f=exGCD(sum1,sum2,&sum1,&sum2); *****/
        if(f > 1)
            printf("Pair #%lld: All you need is love!\n",i);
        else
            printf("Pair #%lld: Love is not all you need!\n",i);
    }
    return 0;

}
