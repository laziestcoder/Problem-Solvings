
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,i,k;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        double a,b,c,ans;
        cin>>a>>b>>c;
        ans=(a+b+c)/2;
        ans=ans*(ans-a)*(ans-b)*(ans-c);
        ans=sqrt(ans);
        printf("Case %d: %.10lf\n",i,ans);
    }
    return 0;
}

/***

#include<bits/stdc++.h>
using namespace std;
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*//**
int main(){

    int T;
    cin >> T;
    for(int t = 1; t <= T; t++){
        double a,b,c;
        cin >> a >> b >> c;
        double s = (a+b+c)/2;
        double tmp = s*(s-a)*(s-b)*(s-c);
        double res = sqrt(tmp);
        printf("Case %d: %.10lf\n",t,res);
    }
    return 0;
}
***/
