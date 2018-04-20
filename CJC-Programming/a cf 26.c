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
int main ()
{
    int f,n,i,j,k,l,m,w,e;
    char s[1000],x[1000];
    while((scanf("%s",s))!=EOF)
    {
        f=0;
        scanf("%d",&k);
        n=strlen(s);
            for(w=0,e=1; w<=n,e<=w; w++,e++)
        {
            x[e]=s[w];
            printf("%s",x[e]);
        }
        for(  i=1, m=(n/k), j=(n/k), l=n ;       i<=(n/k), m<=1 , j<=(n/k), l<=(n/2) ;   i++,m--,j++,l--)
        {
            if(x[i]!=x[m] || x[j]!=x[l])
                f=1;
        }
        if( f==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;


}
