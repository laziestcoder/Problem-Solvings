/*
stack push and pop
*/

#include<stdio.h>
#include<conio.h>
#define N 5

int top=0;
int stack[N+1];

void show(void);

void push(void);

void pop(void);

int menu(void);

int main()
{
	int choice;
	clrscr();
	do
	{
		choice=menu();
		switch(choice)
		{
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: printf("End of operation\n");
				break;
		}
	}while(choice!=3);
	getch();
	return 0;
}
int menu(void)
{
	int choice;
	do
	{
		printf("1-push\n");
		printf("2-pull\n");
		printf("3-Exit\n");
		scanf("%d",&choice);
	}while(choice<1||choice>3);
	return choice;
}
void push(void)
{
	int maxstk=N,item;
	if(top==maxstk)
		printf("overflow\n");
	else
	{
		scanf("%d",&item);
		top+=1;
		stack[top]=item;
	}
	show();

}
void pop(void)
{
	int item;
	if(top==0)
		printf("undrflow\n");
	else
	{
		top-=1;
	}
	show();
}
void show(void)
{
	int i;
	for(i=1;i<=top;i++)
		printf("%d ",stack[i]);
	printf("\n");
}
