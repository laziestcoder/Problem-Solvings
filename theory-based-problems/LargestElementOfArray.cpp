/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include <stdio.h>
#include <iostream>
using namespace std;

int main ()
{
    int a[101], i,max=0,n;

    printf("Enter Number Of Array <1-100>\n");
    cin>>n;
    printf("Enter The Element\n");

    max=0;
    for(i=1;i<=n;i++)
        {
            cin>>a[i];
            if(max<a[i])
                max=a[i];
        }

    cout<<"\nMax Number is : "<<max<<endl;
}
