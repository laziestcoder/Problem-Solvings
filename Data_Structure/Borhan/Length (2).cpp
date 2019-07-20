/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

int main ()
{
    char a[1000];
    int i,j;

    cout<<"Enter A String\n";

    gets(a);

    i=strlen(a);    //strlen is a built in function.. Header File  #include <cstring>

    cout<<"Length Of The String "<<i<<endl;
}
