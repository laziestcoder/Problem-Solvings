/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[2000000];
    int i,j,k,l,n,flag=0,tc=1;
    long long x;

    while(scanf("%s",s)==1)
    {
        x=strlen(s);
        if(x==0)
            break;
        cin>>n;
        cout<<"Case "<<tc<<":"<<endl;
        for(k=1; k<=n; k++)
        {
            cin>>i>>j;

            flag=0;
            if(i<j)
            {
                for(l=i; l<=j; l++)
                {
                    if(s[l]==s[j])
                        flag=0;
                    else
                    {
                        flag =1;
                        break;
                    }
                }
            }
            else
            {
                for(l=j; l>=i; l--)
                {
                    if(s[l]==s[i])
                        flag=0;
                    else
                    {
                        flag =1;
                        break;
                    }
                }
            }
            if(flag==0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        tc++;
    }
    return 0;
}
