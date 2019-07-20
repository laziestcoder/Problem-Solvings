#include<stdio.h>
int main()
{
int n,a,pick,matches,i;
printf("This is a match picking game...\n The last one to pick the match loses....\n No one can pick more than 3 matches\n.....First one to pick is chosen randomly :D\n");
printf("please enter the number of matches you wanna play with: ");
scanf("%d",&matches);
n = matches;
i = n%4;
if(i!=0)
{
if(i==1){
for(;;)
{
printf("pick your matches: ");
scanf("%d",&pick);
if(pick>3)
{
printf("You broke the rules...Die! Game Over!\n");
break;
}
else
{

a=4-pick;
n = n - 4;
printf("I pick %d sticks\n remaining %d\n",a,n);
if(n==1)
{
printf("I pick %d\n remaining 1 YOU LOSE!! Game Over!\n",a);
break;
}

}
}
}
if(i>=2&&i<=3)
{
n = n - (i-1);
printf("I pick %d sticks\n remaining %d\n",i-1,n);
for(;;)
{
printf("pick your matches: ");
scanf("%d",&pick);
if(pick>3)
{
printf("You broke the rules...Die! Game Over!\n");
break;
}
else
{

a=4-pick;
n = n - 4;
printf("I pick %d sticks\n remaining %d\n",a,n);
if(n==1)
{
printf("I pick %d\n remaining 1 YOU LOSE!! Game Over!\n",a);
break;
}

}
}

}
}
else
{
n = n-3;
printf("I pick 3\n remaining %d\n",n);
for(;;)
{
printf("pick your matches: ");
scanf("%d",&pick);
if(pick>3)
{
printf("You broke the rules...Die! Game Over!\n");
break;
}
else
{

a=4-pick;
n = n - 4;
printf("I pick %d sticks\n remaining %d\n",a,n);
if(n==1)
{
printf("I pick %d\n remaining 1 YOU LOSE!! Game Over!\n",a);
break;
}

}
}
}

return 0;
}
