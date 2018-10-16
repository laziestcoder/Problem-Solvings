#include<bits/stdc++.h>
using namespace std;
int main ()
{
    //freopen("in.txt","r",stdin);
    int t,i=0;
    cin>>t;
    while(t--)
    {
        cout<<"Case "<<++i<<":\n";
        int j=0,f=0;
        char s[10];
        string u[105];
        u[0]="http://www.lightoj.com/";
        while(1)
        {
            scanf("%s",s);
            if(s[0]=='V')
            {
                j+=1;
                cin>>u[j];
                f=j;
                cout<<u[j]<<endl;
            }
            else if(s[0]=='B')
            {
                j--;
                if(j<0)
                {
                    j=0;
                    cout<<"Ignored"<<endl;
                }
                else
                 {
                     cout<<u[j]<<endl;

                 }


            }
            else if(s[0]=='F')
            {
                j++;
                if(j>f )
                {
                    j--;
                    cout<<"Ignored"<<endl;
                }
                else
                cout<<u[j]<<endl;

            }
            else if(s[0]=='Q')
            {
                break;
            }
        }
    }

    return 0;
}
