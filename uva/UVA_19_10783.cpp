/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

// Accepted, 10783 	Odd Sum
#include<iostream>
using namespace std;

int main()
{
    int tc,i,j,a,b,sum=0;

    cin >> tc;
    for(i=1;i<=tc;i++)
    {
        cin >> a >> b;
        for(j=a;j<=b;j++)
        {
            if(j%2!=0)
                sum = sum +j;
        }
        cout << "Case "<< i << ":" << " " << sum << endl;
        sum = 0;
    }
    return 0;
}
