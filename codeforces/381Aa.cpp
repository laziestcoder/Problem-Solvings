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
int main ()
{
    long long int n,a,b,c,x=0;
    scanf("%lld %lld %lld %lld",&n,&a,&b,&c);
    x=4-(n%4);
    if(n%4==0 && n!=0)
        cout<<0<<endl;
    else
    {
        if(x==4)
        {
            if(c+a>=2*b)
            {
                if(2*b>=4*a)
                {
                    if(4*a<=4*c)
                        cout<<4*a<<endl;
                    else
                        cout<<4*c<<endl;
                }
                else
                {
                    if(4*c>=2*b)
                        cout<<2*b<<endl;
                    else
                        cout<<4*c<<endl;
                }

            }
            else
            {
                if(c+a>=4*a)
                {
                    if(c*4>=4*a)
                        cout<<4*a<<endl;
                    else
                        cout<<4*c<<endl;
                }
                else
                {
                    if(c+a>=4*c)

                        cout<<c*4<<endl;

                    else
                        cout<<a+c<<endl;
                }

            }

        }
        else if(x==3)
        {
            if(c<=b+a)
            {
                if(c>=3*a)
                    cout<<3*a<<endl;
                else
                    cout<<c<<endl;
            }
            else
            {

                if(b+a>=3*a)
                    cout<<3*a<<endl;
                else
                    cout<<b+a<<endl;
            }

        }
        else if(x==2)
        {
            if(b<=2*c)
            {
                if(b>=2*a)
                    cout<<2*a<<endl;
                else
                    cout<<b<<endl;
            }
            else
            {
                if(2*a<=2*c)
                    cout<<2*a<<endl;
                else
                    cout<<2*c<<endl;
            }
        }
        else if( x == 1 )
        {

            if(a<=3*c)

            {
                if(a<=c+b)
                    cout<<a<<endl;
                else
                    cout<<c+b<<endl;
            }
            else
            {
                if(c+b>=3*c)
                    cout<<3*c<<endl;
                else
                    cout<<c+b<<endl;
            }
        }

    }
    return 0;
}
