#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int i,j,m,l,max,k;
    char t[100005],br[100000],bl[100000];
    cin>>t;
    l=strlen(t);
    j=0;
    m=0;
    for(i=0;i<l;i++)
    {
        if(t[i]=='(')
        {
            j++;
            bl[j]=t[i];
        }
        else if(t[i]==')')
        {
            m++;
            br[m]=t[i];
        }
    }
    max=j;
    if(max<m)
        max=m;

    if(j==0 || m==0)
        cout<<"-1"<<endl;

    else
    {
        for(k=1;k<max;k++)
        {
            if(m>0 && j>0)
            {
                j--;
                m--;
                cout<<bl[k];
                cout<<br[k];
            }
            else if(j>0)
            cout<<bl[k];
            else if(m>0)
                cout<<br[k];

        }

        cout<<endl;

    }

    return 0;
}
