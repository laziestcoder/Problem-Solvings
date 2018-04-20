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
    int n,i,j,a[15],asc=0,dsc=0;
    cin>> n;
    for(i=1; i<=n ;i++)
    {

        for(j=0; j<10; j++)
        {
            cin>>a[j];
        }
        asc=0; dsc=0;
        for(j=0; j<9; j++)
        {
            if(a[j]<a[j+1])
                asc=1;
            else if(a[j]>a[j+1])
                dsc=1;
            else
                continue;

        }
        if(i==1)
            cout << "Lumberjacks:\n";
        if(asc==1 && dsc==1)
            cout << "Unordered\n";
        else
            cout << "Ordered\n";

    }

    return 0;
}

