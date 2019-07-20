#include<bits/stdc++.h>
using namespace std;
bool tw,th,fr,fv;
int main()
{
    int a[5],n=5,i;
    map<int,int>mp;
    while(n--)
    {
        cin>>a[n];
        mp[a[n]]++;
    }
    int sumA = 0;
    for(i=0; i<5; i++)
    {
        sumA+=a[i];
        if(mp[a[i]]==2)
        {
            tw = true;
        }
        else if(mp[a[i]]==3)
        {
            th = true;
        }
        else if(mp[a[i]]==4)
        {
            fr = true;
        }
        else if(mp[a[i]]==5)
        {
            fv = true;
        }
    }
    if(fv)
    {
        cout<<(sumA/5)*2<<endl;
        return 0;
    }
    else if(fr){
        int sum3 = 0;
        for(i=0; i<5; i++)
        {
            if(mp[a[i]]==4)
                {
                    sum3 = a[i];
                    break;
                }
        }
        cout<<sumA-(sum3*3)<<endl;
        return 0;

    }
    else if(th){
        int sum3 = 0,sum2 = 0;
        for(i=0; i<5; i++)
        {
            if(mp[a[i]]==3)
                {
                    sum3 = a[i];
                }
            if(mp[a[i]]==2){
                    sum2 = a[i];
                }
        }
        cout<<min((sumA-(sum3*3)),(sumA-(sum2*2)))<<endl;
        return 0;

    }
    else if(tw){
        int b[2],p=0;
        b[0] = b[1] = 0;
        for(i=0; i<5; i++)
        {
            if(mp[a[i]]==2)
                {
                    b[p] = a[i];
                    p++;
                    mp[a[i]] = 0;
                }
        }
        cout<<min((sumA-(b[0]*2)),(sumA-(b[1]*2)))<<endl;
        return 0;

    }
    cout<<sumA<<endl;
    return 0;
}
