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
int sumsum(long long x)
{
    int r,sum=0;
    while(x!=0)
    {
        r = x%10;
        sum+=r;
        x/=10;
    }
    if(sum<10)
        return sum;
    else
        sumsum(sum);
}
int main()
{
    long long x,ans;
    while(cin>>x)
    {
        if(x==0)
            break;
        else
            ans = sumsum(x);
        cout<<ans<<endl;
    }
    return 0;
}
