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
    int i,l,f,c;
    while(gets(s))
    {
        c=0;
        f=1;
        l=strlen(s);
        for(i=0; i<l ; i++)
        {
             if(f==1 && !(s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            {
                f=0;
                c++;
            }
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
                f=1;



        }


        cout<<c<<endl;
    }
    return 0;
}
