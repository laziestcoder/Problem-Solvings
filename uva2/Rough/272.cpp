#include <bits/stdc++.h>
using namespace std;


int main ()
{
    long long int i,c=0;
    char s[1000000];
    while((scanf("%c",&s[0]))!=EOF){
            cin>>s[1];

    c=0;
      cout<<"program:";
    for(i=0; s[i]!='\0'; i++)
    {
        if( s[i]=='"' && c==0)
         {
             c=1;
             printf("``");
         }
        else if(s[i]=='"' && c==1)
         {
             c=0;
             printf("''");
         }
         else
            cout<<s[i];
    }
    printf("\n");
    }

    return 0;


}



