#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int a,b,c,d,n,x=0,i;
   x=0;
        cin>>n>>a>>b>>c>>d;
        for(i=1; i<=n; i++)
        {
            int s1,s2,s3,s4;
            s1=a+b+i;
            s2=s1-(a+c);
            s3=s1-(b+d);
            s4=s1-(d+c);
            if(s2>=1 && s2<=n && s4>=1 && s4<=n && s3>=1 && s3<=n)
                x++;
        }
        cout<<x*n<<endl;
    return 0;
}
