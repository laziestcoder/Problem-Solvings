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
#define ll int
ll save;



ll myfunction(ll number)
{
    if(number==0||number==1)
    {
        return number;
    }
    ll start=1;
    ll endd=number;
    while(start<=endd)
    {
        ll mid=(start+endd)/2;
        if(mid*mid==number)
        {
            return mid;
        }
        if(mid*mid<number)
        {
            start=mid+1;
            save=mid;
        }
        else
        {
            endd=mid-1;
        }
    }
    return save;
}
int main()
{
    ll number;
    while(1)
    {
        ll number,save,save2,minn,maxx,mid;
        cout<<"Enter a Number to find its floorsqrt()\t(-1 to exit)\n";
        cin>>number;
        if(number==-1)break;
        cout<<"floorsqrt() of the number is  "<<myfunction(number)<<endl<<endl;
    }
    return 0;
}
