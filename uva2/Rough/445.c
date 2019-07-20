#include<stdio.h>
#include<string.h>



int main ()
{
    int i,c,l,x,j=0;
    char s[200]={'\0'};
    while((scanf("%s",s))!=EOF)
    {
        l=strlen(s);
        for(i=0; i<l; i++)
        {
            if(s[i]>='1' && s[i]<='9')
            {
                j=s[i]-48;
                i++;

                for(x=1; x<=j; x++)
                {
                    if((s[i]>='A' && s[i]<='Z') || (s[i]=='*'))
                        printf("%c",s[i]);
                    else if(s[i]=='b')
                        printf(" ");
                    else if (s[i]>='1' && s[i]<='9')
                    {
                        j=j+s[i]-48+1;
                        i++;
                    }
                    else if(s[i]=='!')
                        printf("\n");
                }
            }
            else
            {

                if(s[i]=='b')
                    printf(" ");

                else if(s[i]=='!')
                    printf("\n");

                else if((s[i]>='A' && s[i]<='Z' ) || ( s[i]=='*'))
                    printf("%c",s[i]);
            }
        }


    }

    return 0;
}
