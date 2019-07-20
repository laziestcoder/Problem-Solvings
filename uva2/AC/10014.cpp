/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<bits/stdc++.h>        /***** incomplete *****/
using namespace std;

int main ()
{
    int n,t,i;
    double c[3005],s,a,an;
    cin>>t;
    getchar();
    getchar();
    while(t--)
    {
        cin>>n>>a;
        cin>>an;
        s=0;
        for(i=0; i<n; i++)
            {
                cin>>c[i];
                s+=(n-i)*c[i];
            }
        printf("%.2lf\n",(((n*a)+an)-2*s)/(n+1));
        if(t)
            cout<<endl;
    }
    return 0;
}
