    #include<bits/stdc++.h>
    using namespace std;
    #define pi 3.1415926535897
    int main ()
    {
        char ar[5]= {0};
        int t,i=0,n=0;
        cin>>t;
        while(t--)
        {
            double R,r,deg,rad;
            scanf("%lf %d",&R,&n);
            printf("Case %d: ",++i);
            deg=(360/(2.0*n));
            rad=(pi*deg)/180;
            printf("%lf\n",r=(R*sin(rad))/(1+sin(rad)));
        }
        return 0;
    }

