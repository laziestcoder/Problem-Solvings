#include<bits/stdc++.h>
using namespace std;
int main ()
{
    freopen("151in.txt","r",stdin);
    int n,i,j,a[102]={0};
    while(scanf("%d",&n)==1, n>0)
    {
        j=1;
        while(1)
        {
            if(j==13)
            {
                f=0;
                for(i=1;i<=n ;i++)
                {
                    if(i==13)
                        continue;
                    else if(a[i]==0)
                        {
                            f=1;
                            break;
                        }

                }
                if(f==0)
                    cout<< x << endl;
            }
            else
            {
                if(j==n)
                    j=1;
                a[j]=1;

            }
            j++;

        }


    }
    return 0;
}
