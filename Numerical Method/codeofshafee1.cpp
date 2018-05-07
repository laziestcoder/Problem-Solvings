/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<bits/stdc++.h>
#define MD 1000000007
#define ll long long
using namespace std;
double fun_fx(double x)
{
    double fx=(x*x*x)+(5*x)-10;
    return fx;
}
int main()
{
    cout<<"\t\t\tBisection method algorithm implementation\n\nfunction f(x)=x^3+5x-10\n";
    double a,b;
    while(1)
    {
        cout<<"Enter a and b such as a<b and f(a)*f(b)<0\n";
        cin>>a>>b;
        double mul=fun_fx(a)*fun_fx(b);
        if(a<b && mul<0)
        {
            break;
        }
        else
            {
            cout<<"given a and b not valid! try again :(\n\n";
        }
    }
    double eps;
    cout<<"Enter specific tolerance: ";
    cin>>eps;
    ll i=1;
    double mid=(a+b)/2.0;




    printf(" i\t  a\t\tx(mid)\t\tb\t\tf(a)\t\tf(x(mid))\tf(b)\n");
    cout<<"---------------------------------------------------------------------------------------------------------\n";
    while(fabs(b-mid)>=eps)
    {
        printf("%2lld\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n",i,a,mid,b,fun_fx(a),fun_fx(mid),fun_fx(b));
        if(fun_fx(mid)*fun_fx(b)<0)
        {
            a=mid;
        }
        else if(fun_fx(a)*fun_fx(mid)<0)
        {
            b=mid;
        }
        mid=(a+b)/2.0;
        i++;
    }
    cout<<"Error: "<<fabs(b-mid)<<endl;
    return 0;
}
