/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

/****


Lab 1: Implementation of Bisection method
Course name: Numerical Methods Sessional
Course code: CSE-3608

Submitted to:
Md. Sabir Hossain
Dept. of CSE,
CUET


Submitted by:
Towfiqul Islam
ID: C141018
Section: 6AM
6th semester, Dept of CSE, IIUC
Date of Submission: 07/11/16
*******/


/***

Implementation of Bisection method algorithm
C++ code:

****/


#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double f(double x)    //define the function here, ie give the equation
{
    double a=pow(x,3)-x-11.0;    //write the equation whose roots are to be determined
    return a;
}
int main()
{
    cout.precision(4);        //set the precision
    cout.setf(ios::fixed);
    double a,b,c,e,fa,fb,fc;    //declare some needed variables
    a:cout<<"Enter the initial guesses:\na=";    //Enter the value of a(set a label('a:') for later use with goto)
    cin>>a;
    cout<<"\nb=";            //Enter the value of b
    cin>>b;
    cout<<"\nEnter the degree of accuracy desired"<<endl;    //Enter the accuracy
    cin>>e;                //e stands for  accuracy
    if (f(a)*f(b)>0)        //Check if a root exists between a and b
    {                //If f(a)*f(b)>0 then the root does not exist between a and b
        cout<<"Please enter a different intial guess"<<endl;
        goto a;            //go back to 'a' ie 17 and ask for different values of a and b
    }
    else                //else a root exists between a and b
    {
    while (fabs(a-b)>=e)        /*if the mod of a-b is greater than the accuracy desired keep bisecting the interval*/
    {
        c=(a+b)/2.0;        //bisect the interval and find the value of c
        fa=f(a);
        fb=f(b);
        fc=f(c);
        cout<<"a="<<a<<"     "<<"b="<<b<<"     "<<"c="<<c<<"      fc="<<fc<<endl;
                                        /*print the values of a,b,c and fc  after each iteration*/
        if (fc==0)        //if f(c)=0, that means we have found the root of the equation
        {
            cout<<"The root of the equation is "<<c;    /*print the root of the equation and break out of the loop*/
            break;
        }

        if (fa*fc>0)    //if f(a)xf(c)>0, that means no root exist between a and c
        {
            a=c;    /*hence make a=c, ie make c the starting point of the interval and b the end point*/
        }
        else if (fa*fc<0)
        {
            b=c;    /*this means that a root exist between a and c therfore make c the end point of the interval*/
        }


    }
    }            /**The loop ends when the difference between a and b becomes less than the desired accuracy
                    ie now the value stored in 'c' can be called the approximate root of the equation       **/
    cout<<"The root of the equation is "<<c;    //print the root
    return 0;
}
//output attached as jpg
