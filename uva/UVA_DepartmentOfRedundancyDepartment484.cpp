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
    string s;
    char ch;
    long long x,i,count,j;
    getline(cin,s);
    x=s.length();

    for(i=0; i<x; i++)
    {
        count = 0;
        for(j=0; j<x; j++)
        {
            ch=s.at(j);
            if(ch==s.at(i))
                count++;
        }
        cout<<ch<<" "<<count<<endl;
    }

}
