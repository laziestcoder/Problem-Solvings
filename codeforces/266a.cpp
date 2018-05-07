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
    int i,k;
    char s,a='\0';
    cin>>i;
    k=0;
    while(i--)
    {
        cin>>s;
        if(s==a)
            k++;
        a=s;
    }
    cout<<k<<endl;
    return 0;

}
