/*
inserting a string inside another string
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char t[101],p[21];
	int index,k,i,s,r;
	clrscr();
	printf("inserting pattern into text : \n");
	printf("input the text : ");
	gets(&t[1]);
	printf("input the pattern : ");
	gets(&p[1]);
	printf("input position of insertion : ");
	scanf("%d",&index);
	s=strlen(&t[1]);
	r=strlen(&p[1]);
	if(index>s)
		printf("insertion position not valid.");
	else
	{
		for(i=1;i<=r;i++)
		{
			for(k=s;k>=index;k--)
				t[k+1]=t[k];
			t[index]=p[i];
			index++;
			s++;
			t[s+1]='\0';
		}
		printf("after inserting the text is : ");
		printf("%s",&t[1]);
	}
	getch();
	return 0;
}
