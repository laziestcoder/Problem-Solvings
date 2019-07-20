#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main ()
{
    string s;
    while(1){
            getline(cin,s);
    if(s.size()<1)
        return 0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        s[i]=s[i]-'A'+'a';
        cout<<s[i];
    }
    cout<<endl;
    }
    return 0;
}
