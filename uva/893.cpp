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
bool leapyear(long long int n)
{
    if((n%4==0 && n%100!=0) ||(n%400==0))
        return true;
    else
        return false;
}

#define ll long long

int main ()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll int i,n,d,m,y,x;
    int mon[12]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while(scanf("%lld%lld%lld%lld",&i,&d,&m,&y)!=EOF)
    {
        //cout<<i<<" " <<d<<" "<<m<<" " <<y<<endl;
        if(i==0 && d==0 && m==0 && y==0)
            return 0;

        while(i>=365)
        {
            //cout<<i<<" " <<d<<" "<<m<<" " <<y<<endl;
            //cout<<i<<" "<<d<<" "<<m<<" "<<y<<endl;
            if(leapyear(y+1))
            {
                //printf("came here\n");
                if(i>365)
                {
                    i-=366;
                    y++;
                }
            }
            else
            {
                i-=365;
                y++;
            }
        }



        n=i;
        //cout<<n<<" "<<d<<" "<<m<<" "<<y<<endl;
        if(leapyear(y))
        {
            if(m==2)
            {
                if(d==29)
                {
                    n--;
                }
                else
                {
                    x=1;

                }

            }
            else
                {
                    x=1;

                }

        }
        else
            x=0;


        if(!leapyear(y))
        {
            if(m==2)
                if(d==29)
                {
                    d=1;
                    m=3;
                }

        }

        for(i=m; n!=0; i++)
        {
            //cout<<m<<" ";
            //cout<<"i= "<<i<<endl;
            //printf("came here");
            if(n>mon[i-1])
            {
                //cout<<n<<" "<<d<<" "<<mon[i-1]<<endl;
                //cout<<n<<" "<<d<<" "<<m<<" "<<y<<endl;
                if(i-1==1)
                {
                    n=n-(mon[i-1]+x);
                    //cout<<x<<endl;
                    //cout<<n<<" "<<d<<" "<<m<<" "<<y<<endl;
                    m++;
                }
                else
                {
                    //cout<<n<<" "<<d<<" "<<mon[i-1]<<endl;
                    n-=mon[i-1];
                    m++;
                    //cout<<n<<" "<<d<<" "<<mon[i-1]<<endl;
                }
                //cout<<n<<" "<<d<<" "<<mon[i-1]<<endl;
                //cout<<n<<" "<<d<<" "<<m<<" "<<y<<endl<<endl;
            }
            else
            {
                //cout<<n<<" "<<d<<" "<<mon[i-1]<<endl;
                //cout<<n<<" "<<d<<" "<<m<<" "<<y<<endl;

                if( (n+d) > mon[i-1] )
                {
                    //cout<<n<<" "<<d<<" "<<mon[i-1]<<endl;
                    //cout<<n<<" "<<d<<" "<<m<<" "<<y<<endl;
                    if(leapyear(y))
                    {
                        //cout<<n<<" "<<d<<" "<<m<<" "<<y<<endl;
//                        if(i==2)
//                        {
//                            d=(n+d)-(mon[i-1]+x);
//                            m++;
//                            n=0;
//                        }
//                        else
//                        {
                        d=(n+d)-mon[i-1];
                        m++;
                        n=0;
                        //}
                    }
                    else
                    {
                        //cout<<n<<" "<<d<<" "<<m<<" "<<y<<endl;
                        d=(n+d)-mon[i-1];
                        m++;
                        n=0;
                       // cout<<n<<" "<<d<<" "<<m<<" "<<y<<endl;
                    }
                    //cout<<n<<" "<<d<<" "<<mon[i-1]<<endl;
                    //cout<<n<<" "<<d<<" "<<m<<" "<<y<<endl;
                }
                else
                {
                    //cout<<n<<" "<<d<<" "<<mon[i-1]<<endl;
                    d=n+d;
                    n=0;
                    //cout<<n<<" "<<d<<" "<<i<<" "<<mon[i-1]<<endl;
                }
            }

            if(m>12)
            {

                //cout<<n<<" "<<d<<" "<<m<<" "<<y<<endl;
                m=1;
                y++;
                if(leapyear(y))
                    x=1;
                else
                    x=0;
            }
            //cout<<"i= "<<i<<endl;
            if(i+1>12)
            {
                i=0;
            }
        }
        if(d >mon[m-1])
        {
            //printf("came here");
            if(m==2)
            {
                //printf("came here");
                if(d>(mon[m-1]+x))
                {
                    d=d-(mon[m-1]+x);
                    m++;
                }
            }
            else
            {
                d=d-mon[m-1];
                m++;
            }
        }
        printf("%lld %lld %lld\n",d,m,y);
    }
    return 0;
}
