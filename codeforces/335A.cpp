#include<bits/stdc++.h>
using namespace std;

int main ()
{
    while(1){
        int a,b,c,x,y,z,d1,d2,d3,n;
        scanf("%d%d%d",&a,&b,&c);
        scanf("%d%d%d",&x,&y,&z);


        if(a>=x   &&  b>=y && c>=z)
            cout << "Yes\n";
        else if(a<x && b<y && c<z)
            cout << "No\n";
        else
        {

            if(c<z)
            {
                d3=z-c;
                d3=d3*2;

                if(b>y && c<z)
                {
                    n=b-y;
                    b=y;
                    if( n > d3)
                    {
                        c+=d3/2;
                        n=n-(d3);
                        b+=n;
                    }
                    else
                    {
                        c+=n/2;
                        b+=n%2;
                    }
                }
                if(a>x && c<z)
                {
                    n=a-x;
                    a=x;
                    if(n>d3)
                    {
                        c+=d3/2;
                        n=n-(d3*2);
                        a+=n;
                    }
                    else
                    {
                        c+=n/2;
                        a+=n%2;
                    }
                }
            }
            if(b<y)
            {
                d2=y-b;
                d2=2*d2;
                if (a>x && b<y)
                {
                    n=a-x;
                    a=x;
                    if(n>d2)
                    {
                        b+=d2/2;
                        n=n-d2;
                        a+=n;
                    }
                    else
                    {
                        b+=n/2;
                        a+=n%2;
                    }
                }
                if (c>z && b<y)
                {
                    n=c-z;
                    c=z;
                    if(n>d2)
                    {
                        b+=d2/2;
                        n=n-d2;
                        c+=n;
                    }
                    else
                    {
                        b+=n/2;
                        c+=n%2;
                    }
                }

            }
            if(a<x)
            {
                d1=x-a;
                d1=2*d1;
                if(c>z && a<x)
                {
                    n=c-z;
                    c=z;
                    if(n>d1)
                    {
                        a+=d1/2;
                        n=n-d1;
                        c+=n;
                    }
                    else
                    {
                        a+=n/2;
                        c+=n%2;
                    }
                }
                if(b>y && a<x)
                {
                    n=b-y;
                    b=y;
                    if(n>d1)
                    {
                        a+=d1/2;
                        n=n-d1;
                        b+=n;
                    }
                    else
                    {
                        a+=n/2;
                        b+=n%2;
                    }
                }

            }

            cout<<"a "<<a<<"b "<<b<<"c "<<c<<endl;

            if(a>=x   &&  b>=y && c>=z)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
    return 0;
}
