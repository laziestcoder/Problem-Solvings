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
    int n;
    while(scanf("%d",&n)==1)
    {
        long long int sum=0,i;
        for(i=1; ; i++)
        {
            if(i%3==0 || i%5==0 || i%15==0 ) && i<n)
                sum+=i;
            if(i>100)
                break;

        }
        cout<<sum<<endl;
    }
    return 0;
}
