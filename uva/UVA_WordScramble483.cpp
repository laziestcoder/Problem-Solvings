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
    char a[10000];
    int i,j,l,c,s;
    while(gets(a))
    {
        c=0;
        l=strlen(a);
        s=0;
        for(i=0; i<=l; i++)
        {

            if(a[i]==' ')
            {

                for(j=i-1; j>=s; j--)
                    cout<<a[j];
                cout<<" ";
                s=i+1;
            }


        }

        for(j=l-1; j>=s; j--)
            cout<<a[j];
        cout<<endl;

    }
    return 0;
}
