#include<stdio.h>
int main()
{
    char name[20],i;
    gets(name);

    printf("%.5s\n",name);
    printf("%10.5s\n",name);

    for(i=1;i<9;i++)
        printf("%.*s\n",i,name);

    return 0;
}
