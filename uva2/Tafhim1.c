#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <dos.h>
#include <windows.h>
#include <system.h>
void main()
{
    clrscr();
    char data[1][9999];
    int len,i,j,k,l,time,n;

    printf("Enter any string\n");
    gets(data[0]);
    printf("How many times do you want the text to rotate?\n");
    scanf("%d",&n);

    len=strlen(data[0]);
    printf("%d\n",len);

    for (time=0; time<n; time++)
    {
        for (i=0,l=0; i<=len; i++,l++)
        {
            if (l>len)
                l--;
            clrscr();
            for (j=i; j<len; j++)
            {
                printf("%c",data[0][j]);
            }
            printf(" ");
            for (k=0; k<l; k++)
            {
                printf("%c",data[0][k]);
            }
            printf("\n");
            delay(60);
        }
    }

    getch();
}
