#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a[6],i=0,mn=0,f=0,s=0,sum=0;
    while(1)    {
        i=0;
        mn=0;
        f=0;
        s=0;
        sum=0;
        for(i=0; i<5; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sort(a,a+i);
        int s1=0,f1=0;
        for(i=0; i<5; i++)
        {
            if(mn<a[i])
            {
                f=0;
                s=0;
                mn=a[i];
            }
            if(mn==a[i] && f<3)
            {
                f++;
                s+=mn;
            }
            if(f>=2)
                s1=s, f1=f;

        }
        if(f1>1)
            cout<<sum-s1<<endl;
        else
            cout<<sum<<endl;
    }
    return 0;
}

