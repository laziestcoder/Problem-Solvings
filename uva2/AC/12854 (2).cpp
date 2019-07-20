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

int main ()
{
    int x[6],y[6],c,i ;
    while((scanf("%d",&x[0]))!=EOF)
    {
        c=0;
        for(i=1; i<5; i++)
        {
            scanf("%d",&x[i]);
        }
        for(i=0; i<5; i++)
        {
            scanf("%d",&y[i]);
        }
        for(i=0; i<5; i++)
        {
            if(x[i]==y[i])
                c++;
            else
                continue;
        }
        if(c==0)
            printf("Y");
        else
            printf("N");

        printf("\n");
    }
    return 0;
}
