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
    int n,l,i,j;
    char a[100];
    cin>>n;
    while(n--)
    {
        gets(a);
        l=strlen(a);
        for(i=0; i<l; i++)
        {
            if(a[i]==' ')
            {
                for(j=0; j<i; j++)
                    cout<<a[j];
                cout<<endl;
                break;
            }
        }
    }
}
