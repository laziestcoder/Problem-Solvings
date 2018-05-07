/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/


#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double f(double x);
double f(double x)
{
    double a=pow(x,3)-x-11.0;
    return a;
}
int main()
{
    cout.precision(4);
    cout.setf(ios::fixed);
    double a,b,c,e,fa,fb,fc;
    a:cout<<"Enter the initial guesses:\na=";
    cin>>a;
    cout<<"\nb=";
    cin>>b;
    cout<<"\nEnter the degree of accuracy desired"<<endl;
    cin>>e;
    if (f(a)*f(b)>0)
    {
        cout<<"Please enter a different initial guess"<<endl;
        goto a;
    }
    else
    {
    while (fabs(a-b)>=e)
    {
        c=(a+b)/2.0;
        fa=f(a);
        fb=f(b);
        fc=f(c);
        cout<<"a="<<a<<"     "<<"b="<<b<<"     "<<"c="<<c<<"      fc="<<fc<<endl;
        if (fc==0)
        {
            cout<<"The root of the equation is "<<c;
            break;
        }


        if (fa*fc>0)
        {
            a=c;
        }
        else if (fa*fc<0)
        {
            b=c;
        }




    }
    }
    cout<<"The root of the equation is "<<c;
    return 0;
}

