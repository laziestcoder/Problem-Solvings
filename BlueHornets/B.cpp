#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,t,i,j,x,z;
    string day[10],d,w[10];
    cin>>t;

    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        cin>>d;
        day[0]="FRIDAY";
        day[1]="SATURDAY";
        day[2]="SUNDAY";
        day[3]="MONDAY";
        day[4]="TUESDAY";
        day[5]="WEDNESDAY";
        day[6]="THURSDAY";
        day[7]="FRIDAY";
        for(j=0;j<=6;j++)
        {
            if(d==day[j])
            {
                 x=a%7;
                 z=abs(b-x+j)%7;
                 break;
            }
        }
        cout<<"Case "<<i<<": "<<day[z]<<endl;


    }
    return 0;

}
