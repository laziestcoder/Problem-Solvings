

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<string>
#include<map>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<iomanip>

using namespace std;

#define  mem(x,y) memset(x,y,sizeof(x))
#define sn scanf
#define pf printf
#define pb push_back

typedef long long int ll;

ll Bigmod(ll x,ll y,ll m)
{
    ll r;
    r=1;

    while(y>0)
    {
        if((y%2)) r=((r*x)%m);
        y/=2;
        x=((x*x)%m);

    }
    return  (r%m);
}

ll GCD(ll a,ll b)
{
    if(!a || !b)
        return a+b;
    return GCD(b,a%b);
}

ll LCM(ll a,ll b)
{
    return (a/GCD(a,b))*b;
}

struct pt
{
    double x,y;
};

struct VC
{
    double x,y;
    VC(double x=0,double y=0)
    {
        this->x=x;this->y=y;
    }
};

VC VB(VC a,VC b)
{
    return VC(b.x-a.x,b.y-a.y);
}

double VM(VC a)
{
    return sqrt(a.x*a.x+a.y*a.y);
}

double SCP(VC a,VC b)
{
    double (a.x*b.x+a.y*b.y);
}

double VCP(VC a,VC b)
{
    double (a.x*b.y-b.x*a.y);
}

int main()
{

    return 0;
}

