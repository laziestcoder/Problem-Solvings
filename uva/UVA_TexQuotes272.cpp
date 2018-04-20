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
    char s[10000];
    long long l,i,count=0;
    while(gets(s))
    {
        l=strlen(s);
        for(i=0; i<l; i++)
        {

            if(s[i]=='"')
            {
                count++;
                if(count%2==1)
                    printf("``");
                else
                    printf("''");
            }
            else
                printf("%c",s[i]);

        }
        cout<<endl;
    }
    return 0;
}
