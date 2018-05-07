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
    string s,ss="";
    cin >>s;
    int i,k=0,f=0,sv=0;;
    for(i=0; s[i]; i++)
    {
        if(s[i]=='4')
        {
            ss[k]+='4';
            k++;
            f++;
        }
        else if(s[i]=='7')
        {
            ss[k]+='7';
            k++;
            sv++;
        }
        else if(s[i]<'4')
        {
            ss[k]+='4';
            k++;
            f++;
        }
        else if(s[i]>'4' && s[i]<'7')
        {
            ss[k]+='7';
            k++;
            sv++;
        }
        else
        {
            f++;
            ss[k]+='4';
            k++;
            break;
        }

    }
    if(f==sv)
        cout<<ss<<endl;
    else if(f>sv)
    {
        int c=abs(sv-f);
        if(c%2!=0)
        {
            ss[k]+='4';
            k++;
            f++;
        }
        while(1)
        {
            ss[k]+='7';
            sv++;
            c++;
            k++;
            if(sv==f)
            {
                break;
            }
        }
        cout<<ss<<endl;

    }
    else if(sv>f)
    {
        int c=abs(sv-f);
        if(c%2!=0)
        {
            ss[k]+='7';
            k++;
            sv++;
        }
        while(1)
        {
            ss[k]+='7';
            f++;
            c++;
            k++;
            if(sv==f)
            {
                break;
            }
        }
       cout<<ss<<endl;
    }

    return 0;
}
