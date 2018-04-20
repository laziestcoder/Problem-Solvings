#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j;
    string s,x;
    x="qwertyuiop[]\\asdfghjkl;'zxcvbnm,./`1234567890-=";
    while(getline(cin,s))
    {
        for(i=0; i<s.length() ; i++)
        {
            if(s[i]>='A' && s[i] <= 'Z')
                s[i]=s[i]-'A'+'a';


            if((s[i]==' ' )|| (s[i]=='\n'))
                cout<< s[i];
            else
            {
                for(j=0; j<x.length(); j++)
                {
                    if(s[i]==x[j])
                        {
                            cout<< x[j-2];
                            break;
                        }
                }
            }
        }
    }

    cout << "\n";
    return 0;
}
