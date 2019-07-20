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
    int t,c,L,i,n1[105]= {0},n2[105]= {0},l;
    scanf("%d",&t);
    for(c=1; c<=t; c++)
    {
        scanf("%d",&L);
        for(i=1; i<=L; i++)
        {
            scanf("%d",&n1[i]);
        }
        for(i=1; i<=L; i++)
        {
            scanf("%d",&n2[i]);
        }
        for(l=1; l<=L; l++)
        {
            if(n1[l]==0 && n2[l]==1)
                printf(" ");
            else if(n1[l]==1)
            {
                if(n2[l]==1)
                    printf(".");
                else if(n2[l]==2)
                    printf(",");
                else if(n2[l]==3)
                    printf("?");
                else if(n2[l]==4)
                    printf("\"");
            }
            else if(n1[l]==2)
            {
                if(n2[l]==1)
                    printf("a");
                else if(n2[l]==2)
                    printf("b");
                else if(n2[l]==3)
                    printf("c");
            }
            else if(n1[l]==3)
            {
                if(n2[l]==1)
                    printf("d");
                else if(n2[l]==2)
                    printf("e");
                else if(n2[l]==3)
                    printf("f");
            }
            else if(n1[l]==4)
            {
                if(n2[l]==1)
                    printf("g");
                else if(n2[l]==2)
                    printf("h");
                else if(n2[l]==3)
                    printf("i");
            }
            else if(n1[l]==5)
            {
                if(n2[l]==1)
                    printf("j");
                else if(n2[l]==2)
                    printf("k");
                else if(n2[l]==3)
                    printf("l");
            }
            else if(n1[l]==6)
            {
                if(n2[l]==1)
                    printf("m");
                else if(n2[l]==2)
                    printf("n");
                else if(n2[l]==3)
                    printf("o");
            }
            else if(n1[l]==7)
            {
                if(n2[l]==1)
                    printf("p");
                else if(n2[l]==2)
                    printf("q");
                else if(n2[l]==3)
                    printf("r");
                else if(n2[l]==4)
                    printf("s");
            }
            else if(n1[l]==8)
            {
                if(n2[l]==1)
                    printf("t");
                else if(n2[l]==2)
                    printf("u");
                else if(n2[l]==3)
                    printf("v");
            }
            else if(n1[l]==9)
            {
                if(n2[l]==1)
                    printf("w");
                else if(n2[l]==2)
                    printf("x");
                else if(n2[l]==3)
                    printf("y");
                else if(n2[l]==4)
                    printf("z");

            }
        }

        printf("\n");
    }


    return 0;
}
