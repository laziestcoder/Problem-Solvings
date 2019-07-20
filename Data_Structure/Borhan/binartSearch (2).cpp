/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

31#include <iostream>
#include <stdio.h>
using namespace std;

int main ()
{
    int a[101],v, n,i,j,k,x;
    cout<<"Enter Number Of Elements <1-100>\n";
    cin>>n;

    x=n;

    cout<<"Enter The Elements\n";
    for(i=1;i<=n;i++)
        cin>>a[i];

    cout<<"Enter An ITEM To Search\n";
    cin>>v;


    int B=1,E=x,M=(B+E)/2, LOC=0;

        while(B<=E && a[M]!=v)
            {
                if(v<a[M])
                    E=(M-1);
                else
                    B=(M+1);

                M=(B+E)/2;
            }

        if(a[M]==v)
            LOC=M;
        else
            LOC=NULL;

        cout<<"Location "<<LOC<<endl;







}
