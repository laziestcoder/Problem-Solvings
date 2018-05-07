/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/


#include<stdio.h>


int main ()
{
    char s[100],u[100];

    while(1){
            scanf("%s",&s);
            //printf("%s",s);
            if(s[0] == '#')
                return 0;
    int i,l;

    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]>='a' && s[i]<='z')
            u[i]=s[i]-'a'+'A';
        else
            u[i]=s[i]-'A'+'a';
    }
    u[i]=s[i];
    printf("%s\n",u);

    }
    return 0;
}
