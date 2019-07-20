#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int i,j,k,l,m,n;
    scanf("%d",&n);

    for(j=1;j<2*n;j++)
            cout<<"*";
            cout<<endl;
    for(i=2;i<=n;i++)
    {
        for(k=1;k<i;k++)
            cout<<" ";
        cout<<"*";
       for(l=1;l<2*(n-i);l++)
            cout<<" ";
        if(i<n)
            cout<<"*";

        printf("\n");
    }
    return 0;
}
