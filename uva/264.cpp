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

#define ulli unsigned long long int

int main()
{
    ulli n;
    while (cin >> n && EOF)
    {
        double d = ceil((sqrt(1+8*n) - 1)/2);
        ulli m = (ulli) (d - 1);
        ulli nn = n - (m+1)*m/2;
        m++;
        ulli a,b;
        if (m%2 == 0)
        {
            a = nn;
            b = m+1-nn;
        }
        else
        {
            b = nn;
            a = m+1-nn;
        }
        cout << "TERM " << n << " IS " << a << "/" << b << endl;
    }

    return 0;
}
