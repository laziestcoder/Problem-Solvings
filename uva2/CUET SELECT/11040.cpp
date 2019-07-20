#include<bits/stdc++.h>
using namespace std;
int main ()
{
    freopen("in.txt","r",stdin);
    int t,i,j,k,a[10][10]={0},s;
    cin >>t;
    for(k=1; k<=t; k++)
    {
        for(i=1; i<=9; i+=2)
        {
            for(j=1; j<=i; j+=2)
            cin>>a[i][j];
        }
        for(i=2; i<=9; i++)
        {
            for(j=1; j<i;j++)
            {
                if(i%2==0)
                 {
                     if(a[i-1][j]==(a[i][j]+a[i][j+1]))
                    continue;
                else
                {
                    s=a[i-1][j]/2;
                    if(a[i-1][j]%2!=0)
                        {
                            a[i][j]=s;
                            a[i][j+1]=s+1;
                        }
                        else
                        {
                            a[i][j]=s;
                            a[i][j+1]=s;
                        }
                }
                 }
                 else
                 {

                 }
            }
        }

        for(i=1; i<=9; i++)
        {
            for(j=1; j<=i;j++)
            cout<<a[i][j]<<" " ;
            cout <<"\n";
        }

    }
    return 0;

}
