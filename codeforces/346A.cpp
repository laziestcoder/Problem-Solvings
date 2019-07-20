#include<bits/stdc++.h>
using namespace std;
int main ()

{
    int n,a,b,c=0,d,i;
    scanf("%d%d%d",&n,&a,&b);
    if(b>0)
        d=1;
    else if(b<0)
        d=-1;
    else
    {
        if(b==0)
            cout<<a<<endl;
            return 0;
    }
    for(i=a; c <(b*d) ;)
    {
        i=i+d;
        c++;
        if(i==0)
            i=n;
        if(i== n+1)
            i=1;
        if( c ==(b*d) )
            break;

        if(i==n)
        {
            i=1;
            c++;
            if( c ==(b*d) )
                break;
            i=i+d;
            c++;
            if( c ==(b*d) )
                break;
        }
        if(i==1)

        {
            i=n;
            c++;
            if( c ==(b*d) )
                break;
            i=i+d;
            c++;
            if( c ==(b*d) )
                break;
        }
    }
    printf("%d\n",i);
    return 0;
}

/***#include<bits/stdc++.h>
using namespace std;

int ext_gcd( int A, int B, int *X, int *Y )
{
    int x, y, u, v, m, n, a, b, q, r;
    x = 0;
    y = 1;
    u = 1;
    v = 0;
    for (a = A, b = B; 0 != a; b = a, a = r, x = u, y = v, u = m, v = n)
    {
        q = b / a;
        r = b % a;
        m = x - (u * q);
        n = y - (v * q);
    }
    *X = x;
    *Y = y;
    return b;
}

inline long long modI ( int a, int m )
{
    int x, y;
    ext_gcd( a, m, &x, &y );
    if ( x < 0 ) x += m; //modInv is never negative
    return x;
}
int mod(int n,int m)
{
    int sum = 0;
    while(n)
    {
        sum=n%m;
        n=n/m;
    }
    return sum;
}

int main ()
 {
     ios_base::sync_with_stdio(false); cin.tie(NULL);
     int n,a,b;
     while(1){
            cin>>n>>a>>b;
     if(b<0)
        cout<<a+modI(b,n)<<endl;
     else if(b>0)
        cout<<a+mod(b%n,n)<<endl;
     else if(b==0)
        cout<<a<<endl;
     }
     return 0;
 }
 ***/


