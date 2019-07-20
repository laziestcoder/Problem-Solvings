#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char s1[100],s2[100];
    int l,p,i;
    while(scanf("%s%s",s1,s2)!=EOF)
    {
        l=0;
        p=0;
        for(i=strlen(s1)-1;i>=0;i--)
         {
             if(s1[i]=='.')
                l=0+l*10;
             else
                l=(s1[i]-'0')+l*10;

         }
         for(i=strlen(s2)-1;i>=0;i--)
         {
             if(s2[i]=='.')
                p=0+p*10;
            else
             p=(s2[i]-'0')+p*10;
         }
         if(p>l)
         cout << s2<< endl;
         else
            cout<<s1<<endl;

    }
    return 0;
}
