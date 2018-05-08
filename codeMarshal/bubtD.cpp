#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t,n,m,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n>>m;
        long long int ls[100005]= {-1},rs[100005]= {-1},j=0,k=0;
        long long int mx=0,mn=1000000000,s=0;
        for(j=0; j<n; j++)
        {
            cin>>ls[j];
            s+=ls[j];
            if(ls[j]>mx)
                mx=ls[j];
        }
        for(k=0; k<m; k++)
        {
            cin>>rs[k];
            s+=rs[k];
            if(rs[k]>mx)
                mx=rs[k];
        }
       /** if(mn==mx)
        {
            cout<<0<<endl;
            continue;
        }
        j=0;
        k=0;

         int ll=0;
        for(; ll<max(sizeof(ls),sizeof(rs)) ; )
           {
               if(ls[j]<=rs[k])
               {
                   s+=ls[j];
                   if(ls[j]==mx)
                   {
                       cout<<s-ls[j]<<endl;
                       break;
                   }
                   else if(rs[k]==mx)
                   {
                       if(ls[j+1] < rs[k] && ls[j+1]!=-1)
                           cout<<s+ls[j+1]<<endl;
                       else
                           cout<<s<<endl;
                       break;
                   }
                   else
                       j++;
               }
               else if(ls[j]>=rs[k])
               {
                   s+=rs[k];
                   if(rs[k]==mx)
                   {
                       cout<<s-rs[k]<<endl;
                       break;
                   }
                   else if(ls[j]==mx)
                   {
                       if(rs[k+1] < ls[j] && rs[k+1]!=-1)
                           cout<<s+rs[k+1]<<endl;
                       else
                           cout<<s<<" 11 "<<endl;
                       break;
                   }
                   else
                       k++;
               }
               ll=max(j,k);
           }
           s=0;
        for(j=0 ; j<n ; j++)
        {
            if( ls[j] mx )
                s+=ls[j];
            else
                break;

        }
        for(k=0; k<m; k++)
        {
            if( rs[k]<mx )
                s+=rs[k];
            else
                break;

        }**/

        printf("Case %lld: %lld\n",i,s-mx);

    }
    return 0;
}
