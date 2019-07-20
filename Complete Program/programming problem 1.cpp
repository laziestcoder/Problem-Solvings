#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int a[10000],b,d[2],amount,c,i,amount2=0;//for books prize,how many books want to buy

    cin>>b;//how many books have for check

    for(i=0;i<b;i++)
    {
        cin>>a[i];
    }
    cin>>amount;//total amount input
    for(i=0;i<b-1;i++)
    {
        c=i+1;
        for(;c<b+1;c++)
        {
            if(a[i]+a[c]==amount)
            {
                if(a[i]*a[c]>amount2)
                {
                    amount2=a[i]*a[c];
                    d[0]=a[i];
                    d[1]=a[c];
                }
            }
        }
    }
    cout<<"Peter should buy books whose prices are "<<d[0] <<" and "<<d[1];
    return 0;
}
