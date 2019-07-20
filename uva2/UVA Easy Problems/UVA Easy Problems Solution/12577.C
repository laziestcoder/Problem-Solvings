/*straightforward problem*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[10];
	int count=0;
	while(1)
	{
		scanf("%s",str);
		if(strcmp(str,"*")==0)
			break;
		count++;
		if(strcmp(str,"Hajj")==0)
			printf("Case %d: Hajj-e-Akbar\n",count);
		else
			printf("Case %d: Hajj-e-Asghar\n",count);
	}
	return 0;
}