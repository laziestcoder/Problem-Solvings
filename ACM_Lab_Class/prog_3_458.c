// Accepted, 458 - The Decoder
#include<stdio.h>
#include<string.h>

int main()
{
    int i, n;
    char str[1000];
    while(gets(str)!=NULL)
    {
        n = strlen(str);
        for(i=0;i<n;i++)
            printf("%c",str[i]-7);
            printf("\n");
    }
    return 0;
}
