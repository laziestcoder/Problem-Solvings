#include<stdio.h>
#include<string.h>
int main()
{
int l,i,j,count=0;
char s[100000];
while(gets(s))
{
l=strlen(s);
for(i=0;i<l;i++)
    {
    switch(s[i])
            {
            case 'b':
                {
                for(j=0;j<count;j++)
                printf(" ");
                count=0;    break;
                }
            case '1':
            count=count+1;      break;
            case '2':
            count=count+2;      break;
            case '3':
            count=count+3;      break;
            case '4':
            count=count+4;      break;
            case '5':
            count=count+5;      break;
            case '6':
            count=count+6;      break;
            case '7':
            count=count+7;      break;
            case '8':
            count=count+8;      break;
            case '9':
            count=count+9;      break;
            case '!':
            printf("\n");
            default:
                {
                for(j=0;j<count;j++)
                printf("%c",s[i]);
                count=0;    break;
                }
            }
        }
printf("\n");
}
return 0;
}
