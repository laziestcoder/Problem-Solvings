#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int x=1,i,c=0,n,w;
    vector <int> a;
    while(1)
    {
        cin>>n;

        if(n==0)
            break;
        for(i=0; i<n; i++)
        {
            cin>>w;
            a.push_back(w);
        }
        for(i=1; i<n-1; i++)
        {
            if(a[i]>0 && a[i]>a[i-1] && a[i]>a[i+1])
            {
                c++;
            }
        }
        cout<<"Case "<<x<<": "<<c<<"\n";
        x++;
        c=0;
        a.clear();
    }
    return 0;
}
