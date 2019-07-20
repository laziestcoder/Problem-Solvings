/*
deleting a substring inside a string
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char p[21],t[101];
	int r,s,k,max,l,index=0,i;
	clrscr();
	printf("searching the first occurance of a pattern in a text : \n");
	printf("input text : ");
	gets(&t[1]);
	s=strlen(&t[1]);
	printf("input pattern : ");
	gets(&p[1]);
	r=strlen(&p[1]);
	max=s-r+1;
	for(k=1;k<=max&&index==0;k++)
	{
		for(l=1;l<=r;l++)
			if(t[k+l-1]!=p[l])
				break;
		if(l==r+1)
			index=k;
	}
	if(index==0)
		printf("pattern never occured in text.");
	else
	{
		for(l=1;l<=r;l++)
		{
			for(i=index;i<s;i++)
				t[i]=t[i+1];
			s--;
		}
		t[s+1]='\0';
		printf("after deleting the first occurance of pattern in text :\ntext is: %s",&t[1]);
	}

	getch();
	return 0;
}
