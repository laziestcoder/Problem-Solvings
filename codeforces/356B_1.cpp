#include<bits/stdc++.h>
using namespace std;
int main ()
{
        int a,n,c[105]= {0},i,j,k;
        cin>>n>>a;
        for(i=1; i <=n; i++)
            cin>>c[i];
        int s=0;
        if(c[a]==1)
            s+=1;
        for(i=1; i <= n;i++)
        {
            if( a - i >= 1 && a + i <= n && c[a-i]==1 && c[a+i]==1)
                {
                    s+=2;
                }
            else if(a - i >= 1 && c[a-i]==1 && a+i>n)
                s++;
            else if(a + i <= n && c[a+i]==1 && a-i<1)
                s++;
        }
        cout<<s<<endl;
    return 0;
}
