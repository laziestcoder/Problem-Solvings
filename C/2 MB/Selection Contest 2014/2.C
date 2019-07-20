/*Sample Input:
This is a test.
How many vowels in "sky"?
Are you sure you can handle both CAPITAL and lower case?
D.J. pike flung Q.V. Schwartz my box.

Output for Sample Input:
4
5
20
5*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i,vcount=0;
    while(1)
    {
        gets(str);
        if(str[0]=='*')
            break;
        for(i=0;str[i]!='\0';i++)
        {
            str[i]=tolower(str[i]);
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
                vcount++;
        }
        printf("%d\n",vcount);
        vcount=0;
    }
    return 0;
}
