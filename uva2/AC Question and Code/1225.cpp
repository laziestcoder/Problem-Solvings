#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int s,i,t,num,d[11]= {0};
    cin>> t;
    while(t--)
    {
        cin>>num;
        for(i=1; i<= num; i++)
        {
            s=i;
            while(s>9)
            {
                d[s%10]++;
                s=s/10;
            }
            d[s]++;

        }
        for(i=0;i<=9; i++)
        {
            cout<<d[i];
            if(i<9)
                cout<<" ";
            d[i]=0;
        }
        cout<<endl;

    }
    return 0;
}
