#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i=0,m=0,a[105]={0},n=0,cnt=0;
    long long int sum;
    cin >> n;
    cin>> m;
    for(i=0; i<n; i++)
    {
        cin>> a[i];
    }
    sort(a,a+n);
    sum=0;
    cnt=0;
    for(i=n-1; i>=0; i--)
    {
        cnt++;
        sum=sum+a[i];
        if(sum>=m)
            {
                break;
            }
    }
    cout<< cnt;
    return 0;
}
