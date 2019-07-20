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
#include <cstring>
using namespace std;

int main ()
{
    int a[102],n,i,k;

    cout<<"Enter Number Of Elements Of The Array <1-100>\n";
    cin>>n;
    cout<<"Enter The Elements\n";

    for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }



    for(k=1;k<=n-1;k++)
        {
            int temp,ptr=1;

            while(ptr<=n-k)
                {
                    if (a[ptr]>a[ptr+1])
                        {
                            temp=a[ptr];
                            a[ptr]=a[ptr+1];
                            a[ptr+1]=temp;

                        }

                    ptr++;
                }

        }

    cout<<"After Sorted\n";

        for(i=1;i<=n;i++)
            {
                cout<<a[i]<<"\n";
            }














}
