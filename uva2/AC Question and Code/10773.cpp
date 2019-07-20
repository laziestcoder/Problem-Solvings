#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,c=0;
    cin >>t;
    while(t--)
    {
        int d,v,u;

        cin>>d>>v>>u;

        c++;
        cout<<"Case "<<c<<": ";

        double t1=0,t2=0;
        if(v>=u || v==0 || u==0)
            cout<<"can't determine"<<endl;
        else
        {
            t1 = (1.0*d)/(u*1.0); ///shortest path
            t2 = (1.0*d)/(sqrt((u*u)-(v*v))*1.0); ///shortest time but longest path

            t1 = fabs(t2-t1);

            printf("%.3lf\n",t1);
        }
    }
    return 0;
}
