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
int main()
{
    int i,n;
    char s[10];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",s);
        if(strlen(s)==3)
        {
               if(s[0]=='o' && s[1]=='n' || s[1]=='n' && s[2]=='e' || s[0]=='o' && s[2]=='e')
            printf("1\n");
            else if(s[0]=='t' && s[1]=='w' || s[1]=='w' && s[2]=='o' || s[0]=='t' && s[2]=='o')
                printf("2\n");
        }
        else if(strlen(s)==5)
            printf("3\n");
    }
    return 0;
}
