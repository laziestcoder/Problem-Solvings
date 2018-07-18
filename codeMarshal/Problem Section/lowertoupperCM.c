#include<stdio.h>
#include<string.h>

int main ()
{
    //freopen("input.txt","r",stdin);
    int t;
    scanf("%d",&t);
    getchar();
    int i;
    for(i=1; i<=t ; i++)
    {
        char name[105];
        //scanf(" %[^\n]",name); // it is bad
        //scanf(" %[^\n]%*c",name); // it is bad
        //scanf(" %[^\t\n]s",&name); // it is bad
        //scanf (" %[^\n]s", name);
        gets(name); // it works fine
        int j;
        printf("Case %d: ",i);
        for(j=0; name[j]!='\0'; j++)
        {
                printf("%c",toupper(name[j]));
        }
        printf("\n");
    }
    return 0;
}
