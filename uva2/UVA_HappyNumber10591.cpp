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

int happy(long long x)
{

    int r,sum=0;
    while(x!=0)
    {
        r=x%10;
        sum+=r*r;
        x/=10;
    }
    if(sum>9)
        happy(sum);
    else
        return(sum);
}

int main()
{
    long long n,t,i,j,ans;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        ans = happy(n);
        if(ans==1)
            cout<<"Case #"<<i<<": "<<n<<" is a Happy number."<<endl;
        else
            cout<<"Case #"<<i<<": "<<n<<" is an Unhappy number."<<endl;

    }
    return 0;
}
