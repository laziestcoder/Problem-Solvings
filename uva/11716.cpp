#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int	t,i,j,k,l,c;
    string s,s1[105];
    cin>>t;
    for(i=1; i<=t; i++)
    {
        if(i==1)
            getchar();
        getline(cin,s);

        l=sqrt(s.length());

        if(l*l!=s.length())
            cout<<"INVALID";
        else
        {
            c=0;
            for(j=0; j<l; j++)
            {
                for(k=0; k<l; k++)
                {
                    s1[j][k]=s[c];
                    c++;
                }
            }
            for(k=0; k<l; k++)
            {
                for(j=0; j<l; j++)
                {
                    cout<<s1[j][k];
                }
            }
        }
        cout<<endl;
    }
    return 0;
}


/******* version 2
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int	t,i,j,k,l,c;
    string s;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        if(i==1)
            getchar();
        getline(cin,s);

        l=sqrt(s.length());

        if(l*l!=s.length() || l<=1)
            cout<<"INVALID";
        else
        {
            c=0;
            for(j=0; j<l; j++)
            {
                for(k=j; k<s.length(); k+=l)
                {
                    cout<<s[k];
                }
            }
        }
        cout<<endl;
    }
    return 0;
}

**********/
