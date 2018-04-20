/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include <iostream>
#include <stdio.h>
#include <math.h>    //  must
using namespace std;

int main ()
{
    float a,b,c,D,x,x1,x2;

    cout<<"Input A, B & C\n";

    cin>>a>>b>>c;

    D=(b*b)-(4*a*c);

    if(D<0)
    cout<<"\nNo Real Soution\n";

    else if(D==0)
        {
            x=(-b)/(2*a);
            cout<<"Value Of X : "<<x<<endl;
        }
    else if(D>0)
        {
            x1=(-b+sqrt(D))/(2*a);
            x2=(-b-sqrt(D))/(2*a);

            cout<<"X1 : "<<x1<<endl<<"X2 : "<<x2<<endl;

        }


}
