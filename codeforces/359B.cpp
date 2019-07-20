#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n,i,a[105],tmp,p=0;
    // while(1){
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
here:
    for(i=1; i<n; i++)
    {
        p++;
        if(a[i+1]<a[i])
        {
            tmp=a[i];
            a[i]=a[i+1];
            a[i+1]=tmp;
            cout<<i<<" "<<i+1<<endl;
            goto here;
        }
    }
    //}
    return 0;
}
