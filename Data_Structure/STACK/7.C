/*
converting an infix expression to postfix expression
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

#define N 1000

char stack[N+1];
int top=0;

void push(char c);
char pop(void);
int opchk(char c);
int main()
{
	char q[1001], p[1001], temp, xtemp[101];
	int i, len,t,j=0, m, k;
	clrscr();
	printf("converting an infix expression to postfix\n");
	printf("use '^' for exponents : \n");
	printf("input letters for operands: \n");
	printf("\ninput the infix expression : ");
	scanf("%s",&q[1]);;
	len=strlen(&q[1]);
	q[len+1]=')';
	len++;
	q[len+1]='\0';
	push('(');
	for(i=1;i<=len;i++)
	{
		if(isalpha(q[i]))
			p[++j]=(q[i]);
		else if(q[i]=='(')
			push(q[i]);
		else if(q[i]==')')
		{
			while(stack[top]!='(')
				p[++j]=pop();
			temp=pop();
		}
		else
		{
			m=0;
			while(stack[top]!='(')
			{
				xtemp[++m]=pop();
			}
			for(k=1;k<=m;k++)
			{
				if(opchk(xtemp[m])>=opchk(q[i]))
					p[++j]=xtemp[m];
				else
					push(xtemp[m]);
			}
			push(q[i]);
		}
	}
	p[++j]='\0';

	printf("in postfix : %s",&p[1]);
	getch();
	return 0;
}
void push(char c)
{
	top++;
	stack[top]=c;
}
char pop(void)
{
	return stack[top--];
}
int opchk(char c)
{
	if(c=='+'||c=='-')
		return 1;
	else if(c=='*'||c=='/')
		return 2;
	else if(c=='^')
		return 3;
}
