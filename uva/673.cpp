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
int main ()
{

    int t,f1,f2,i;
    string s;
    cin>>t;
    getchar();
    while(t--)
    {
        getline(cin,s);
        f1=0;
        f2=0;
        if(s=="")
            {
                cout<<"Yes\n";
                continue;
            }

        for(i=0; i<s.length(); i++)
        {

            if(s[i]=='(')
            {
                f1++;
            }
            else if(s[i]=='[')
            {
                f2++;
            }
            else if(f1 <= 0 && s[i]== ')')
            {
                f1=-1000;
                break;
            }
            else if(f2 <= 0 && s[i]== ']')
            {
                f2=-1000;
                break;
            }
            else if( f1 >0 && s[i]== ')')
            {
                if(s[i-1] == '[' )
                {
                    f1=-1000;
                    break;
                }
                f1--;
            }
            else if(f2>0 && s[i]== ']')
            {
                if(s[i-1] == '(' )
                {
                    f2=-1000;
                    break;
                }
                f2--;
            }
        }

        if(f1 == 0 && f2 == 0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
