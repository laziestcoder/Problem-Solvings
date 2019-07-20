/*
evaluating a postfix expression
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

#define N 100

int stack[N+1], top=0;

void push(int c);
int pop(void);

int main()
{
	char p[101],temp[5], plus[2]="+",minus[2]="-",mul[2]="*", div[2]="/", exp[2]="^";
	int i, len, t, a, b, n, value, x;
	clrscr();
	printf("evaluating a postfix expression : \n");
	printf("use comma : \n");
	printf("input the postfix expression : ");
	scanf("%s",p);
	len=strlen(p);
	p[len]=')';
	len++;
	p[len]='\0';
	t=0;
	for(i=0;i<len;i++)
	{
		if(p[i]!=','&&p[i]!=')')
			temp[t++]=p[i];
		else
		{
			temp[t]='\0';
			t=0;
			if(strcmp(temp,plus)==0||strcmp(temp,minus)==0||strcmp(temp,mul)==0||strcmp(temp,div)==0||strcmp(temp,exp)==0)
			{
				a=pop();
				b=pop();
				if(strcmp(temp,plus)==0)
					push(b+a);
				else if(strcmp(temp,minus)==0)
					push(b-a);
				else if(strcmp(temp,mul)==0)
					push(b*a);
				else if(strcmp(temp,div)==0)
					push(b/a);
				else
				{
					value=1;
					for(x=1;x<=a;x++)
						value*=b;
					push(value);
				}

			}
			else
			{
				n=atoi(temp);
				push(n);
			}
		}
	}
	printf("value of postfix expression : %d",stack[top]);
	getch();
	return 0;
}
void push(int c)
{

	stack[++top]=c;
}
int pop(void)
{
	return stack[top--];
}
