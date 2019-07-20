// Pattern Matching,Algorithm: 3.3, Page: 54
#include<stdio.h>
int main()
{
    int k=1,l,s,r,indx=0,max;
    char p[80],t[80];
    scanf("%s",&t[1]);
    s=strlen(&t[1]);
    scanf("%s",&p[1]);
    r=strlen(&p[1]);
    max=s-r+1;
    while(k<=max)
    {
        for(l=1;l<=r;l++)
            if(p[l]!=t[k+l-1])
                goto step5;
            indx=k;
            break;
        step5 : k=k+1;
    }
    if(indx==0)
        printf("Not Found");
    else
        printf("Found at : %d",indx);

    return 0;
}
