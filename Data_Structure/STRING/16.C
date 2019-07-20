/*
counting the number of occurence of all letters inside a string
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int l[130]={0};

int main()
{
	char t[101];
	int i, len;
	clrscr();
	printf("counting the occurance of all letters in a text : \n");
	printf("input text : ");
	gets(&t[1]);
	len=strlen(t);
	for(i=1;i<=len;i++)
		if(isalpha(t[i]))
			l[t[i]]++;
	printf("\n\n");
	for(i=97;i<=122;i++)
		if(l[i])
			printf("%c occured %d times in text\n",i,l[i]);
	for(i=65;i<=90;i++)
		if(l[i])
			printf("%c occured %d times in text\n",i,l[i]);
	getch();
	return 0;
}
