#include<bits/stdc++.h>
using namespace std;
int main ()
{

    int tmp,i,j,t,n,l,a[55],s,k;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin>> n;
        for(j=0; j<n; j++)
        {
            cin>> a[j];
        }
        s=0;
        for(k=0; k<n; k++)
        {
            for(l=k+1; l<n; l++)
            {
                if(a[k]>a[l])
                {
                    tmp=a[k];
                    a[k]=a[l];
                    a[l]=tmp;
                    s++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<s<<" swaps.\n";
    }
    return 0;
}
