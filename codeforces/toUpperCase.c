/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{

    char l[100];
    int t,c=0;
    while(1)
    {
        gets(l);

        t=strlen(l);
        // printf("%d",t);
        while(c<t)
        {

            putchar(toupper(l[c]));
            c++;

        }
          printf("\n");
    }
}

