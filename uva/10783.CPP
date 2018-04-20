/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

// 10783 - Odd Sum-Accepted
#include<iostream>
using namespace std;

int main()
{
    int tc,k,x,a,b,i,s=0;
    cin >> tc;
    for(k=1;k<=tc;k++)
    {
        cin >> a >> b;
        for(i=a;i<=b;i++)
        {

            if(i%2!=0)
                s=s+i;
        }
        cout << "Case" << " " << k << ":" << " " << s << endl;
        s=0;
    }
    return 0;
}
