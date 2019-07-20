#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char s[20],b[20];
    int t,i=0;
    cin>>t;
    int m,k,j,f=0,p=0,q=0;
    while(t--)
    {
        scanf("%s",s);
        printf("Case %d: ",++i);
        int l=strlen(s);
        f=0;p=0;q=0;
        if(l%2 == 0 )
        {
            if ((m%2)==0)
            {

                for(j=0; j<m ; j++)
                {
                    b[j]=s[j];
                }
                for(j=j-1, k=0 ; j<l; k++, j++)
                {
                    if(b[j]!=s[j])
                    {
                        f=1;
                        break;
                    }

                }
            }
            else
            {
                f=1;
                m=(m/2)-1;
                for(j=0; j<=m; j++)
                {
                    b[j]=s[j];
                }
                f=0;
                for(j=j-1,k=0; j<l; k++, j++)
                {
                    if(b[k]!=s[j])
                    {
                        p=1;
                        break;
                    }
                    if((k+1) == m)
                        k=-1;
                }
                m=((l/2)/2)+1;
                for(j=0; j<=m; j++)
                {
                    b[j]=s[j];
                }
                for(j=j-1,k=0; j<l; k++, j++)
                {
                    if(b[k]!=s[j])
                    {
                        q=1;
                        break;
                    }
                    if((k+1) == m)
                        k=-1;
                }
            }

        }
        else
            {
                cout<<"NO\n";
                continue;
            }


    if(f==0 || p==0 || q==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}

return 0;

}
