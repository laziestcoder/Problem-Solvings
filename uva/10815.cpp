#include<bits/stdc++.h>
using namespace std;
char s[1000006];
int main()
{
    //freopen("10815.txt","r",stdin);
    set<string> tree;
    while(gets(s))
    {
        //cout<<s<<endl;
        string str="";
        for(int i=0; s[i]; i++)
        {
            if(isalpha(s[i]))
            {
                str+=tolower(s[i]);
            }
            else
            {
                str+=" ";
            }
        }
        //cout<<str<<endl;
        string token;
        stringstream sin(str);
        while(sin>>token)
        {
            tree.insert(token);
        }
    }

    for(set<string>::iterator it = tree.begin(); it!= tree.end(); it++){
        cout<<*it<<endl;
    }


    return 0;
}
