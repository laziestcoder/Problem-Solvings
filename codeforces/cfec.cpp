#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a[400000],b,n,f,i;
    cin>> n;
    for (i=1; i<=n ;i++ );
    {
        scanf("%d",&a[i]);
    }
    f=0;
    b=0;
    for(i=1; i<=n ; i++)
    if(a[i]< a[i+1])
    {
        f=1;
    }
    else if (a[i]> a[i+1])
    {
        b=1;
    }
    if(b==0 || f==0)
    cout << "-1"<<endl;
    else if
}
