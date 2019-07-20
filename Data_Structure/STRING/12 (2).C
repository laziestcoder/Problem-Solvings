/*
string length, concatenation, comparison, copy, reverse
without any library function
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int len1,len2,count,i,j,x;
	char str1[21],str2[21],ch;
	clrscr();
	printf("Calculating the length of a string : \n");
	printf("input your string : ");
	scanf("%s",str1);
	count=0;
	i=0;
	while(str1[i])
	{
		count++;
		i++;
	}
	printf("the length of the string is : ");
	printf("%d\n",count);
	printf("\n\n");
	printf("copying the second string to the first string : \n");
	printf("input first string : ");
	scanf("%s",str1);
	printf("input second string : ");
	scanf("%s",str2);
	i=0;
	while(str2[i])
	{
		str1[i]=str2[i];
		i++;
	}
	str1[i]='\0';
	printf("after copying the first string is : %s",str1);
	printf("\n\n");
	printf("concatenating the second string to the first string : \n");
	printf("input the first string : ");
	scanf("%s",str1);
	printf("input the second string : ");
	scanf("%s",str2);
	i=0;
	j=0;
	while(str1[i])
		i++;
	while(str2[j])
	{
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]='\0';
	printf("after concatenating the first string is : ");
	printf("%s",str1);
	printf("\n\n");
	printf("comparing two string : \n");
	printf("input first string : ");
	scanf("%s",str1);
	printf("input second string : ");
	scanf("%s",str2);
	i=0;
	len1=0;
	while(str1[i])
	{
		i++;
		len1++;
	}
	i=0;
	len2=0;
	while(str2[i])
	{
		i++;
		len2++;
	}
	if(len1!=len2)
		printf("strings are not equal");
	else
	{
		x=1;
		i=0;
		while(str1[i])
		{
			if(str1[i]!=str2[i])
			{
				x=0;
				break;
			}
			i++;
		}
		if(x==1)
			printf("the strings are equal");
		else
			printf("the strings are not equal");
	}
	printf("\n\n");
	printf("reversing a string : \n");
	printf("input string : ");
	scanf("%s",str1);
	i=0;
	count=0;
	while(str1[i])
	{
		count++;
		i++;
	}
	x=count/2;
	for(i=0;i<x;i++)
	{
		ch=str1[i];
		str1[i]=str1[count-1-i];
		str1[count-1-i]=ch;
	}
	printf("after reversing the string is : ");
	printf("%s",str1);
	getch();
	return 0;
}
