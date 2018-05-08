#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
int main ()
{
    int t,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        double ans,L,W,R,x,D,y;
        scanf("%lf %lf %lf",&L,&W,&R);
        D=2*R;
        if( W < D )
        {
            y=R-W/2;
            x =( D*D ) - W*W;
            ans=W*x+tan(R/y);
        }
        else
            ans=pi*R*R;
        printf("Case %d: %.6lf\n",i,ans);
    }
    return 0;
}
