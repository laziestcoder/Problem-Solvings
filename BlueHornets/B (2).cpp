#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,t,i,j,x,z;
    string day[10],d,w[10];
    cin>>t;
    memset(w,1,sizeof(w));
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        cin>>d;
        day[0]="SATURDAY";
        day[1]="SUNDAY";
        day[2]="MONDAY";
        day[3]="TUESDAY";
        day[4]="WEDNESDAY";
        day[5]="THURSDAY";
        day[6]="FRIDAY";
        for(j=0;j<=6;j++)
        {
            if(d==day[j])
            {
                if(a<7 || b<7)
                    z=b-1;
                else
                    {
                        x=a%7;
                        if(x>j)
                        {
                            x=x-j;
                            z=(abs(b-x))%7;
                        }
                        else if(j>x)
                        {
                          x=j-x;
                          z=((b%7)+x)%7;
                        }
                    }

                break;


            }

        }
        cout<<"Case "<<i<<": "<<day[z]<<endl;


    }
    return 0;

}
