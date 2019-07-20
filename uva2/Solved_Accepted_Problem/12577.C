/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

//12577 - Hajj-e-Akbar- Accepted
#include<stdio.h>
#include<string.h>
int main()
{
    int x,k=1;
    char a[20];
    while(1)
    {
        scanf("%s",a);
        if(a[0]=='*')
            break;
        else if(strcmp(a,"Hajj")==0)
            printf("Case %d: Hajj-e-Akbar\n",k++);
        else
            printf("Case %d: Hajj-e-Asghar\n",k++);
    }
    return 0;
}
