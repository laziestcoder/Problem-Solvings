#include<stdio.h>
int main()
{
int n,a,pick,matches, b,c,row=5,column=51,i,j,r;
c = 13;
b = 18;
printf("This is a match picking game...\n the last one to pick the match loses....\n no one can pick more than 3 matches\n.....first one to pick is chosen randomly :D\n");
printf("please enter the number of matches you wanna play with: ");
scanf("%d",&matches);
n = matches;
r = n%4;
if(r!=0)
{
if(r==1){
for(;;)
{
printf("pick your matches: ");
scanf("%d",&pick);
if(pick>3)
{
printf("You broke the rules...Die! Game Over!\n");
for(i=1;i<=row;i++)
{
for(j=1;j<=column;j++)
{
if(((i>=1&&i<=3)&&(j==c||j==b))||j==(c+20)||j==(b+23)||j==1||j==12||j==19||j==21||j==43||j==48||((i==1||i==5)&&((j>=2&&j<=5)||j==50||(j>=22&&j<=24)||(j>=28&&j<=30)||(j>=44&&j<=46)))||(i==1&&(j==8||j==9||j==49))||(i>=2&&(j==7||j==10))||((i>=2&&i<=4)&&(j==27||j==31))||(i==2&&j==51)||(i==3&&((j>=3&&j<=5)||j==8||j==9||j==22||j==23||j==44||j==45||j==49||j==50))||(i==4&&(j==5||j==49)))
printf("*");
else printf(" ");
}
c++;
b--;
printf("\n");
}
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
for(i=1;i<=row;i++)
{
for(j=1;j<=column;j++)
{
if(((i>=1&&i<=3)&&(j==c||j==b))||j==(c+20)||j==(b+23)||j==1||j==12||j==19||j==21||j==43||j==48||((i==1||i==5)&&((j>=2&&j<=5)||j==50||(j>=22&&j<=24)||(j>=28&&j<=30)||(j>=44&&j<=46)))||(i==1&&(j==8||j==9||j==49))||(i>=2&&(j==7||j==10))||((i>=2&&i<=4)&&(j==27||j==31))||(i==2&&j==51)||(i==3&&((j>=3&&j<=5)||j==8||j==9||j==22||j==23||j==44||j==45||j==49||j==50))||(i==4&&(j==5||j==49)))
printf("*");
else printf(" ");
}
c++;
b--;
printf("\n");
}
break;
}

}
}
}
if(r>=2&&r<=3)
{
n = n - (r-1);
printf("I pick %d sticks\n remaining %d\n",r-1,n);
for(;;)
{
printf("pick your matches: ");
scanf("%d",&pick);
if(pick>3)
{
printf("You broke the rules...Die! Game Over!\n");
for(i=1;i<=row;i++)
{
for(j=1;j<=column;j++)
{
if(((i>=1&&i<=3)&&(j==c||j==b))||j==(c+20)||j==(b+23)||j==1||j==12||j==19||j==21||j==43||j==48||((i==1||i==5)&&((j>=2&&j<=5)||j==50||(j>=22&&j<=24)||(j>=28&&j<=30)||(j>=44&&j<=46)))||(i==1&&(j==8||j==9||j==49))||(i>=2&&(j==7||j==10))||((i>=2&&i<=4)&&(j==27||j==31))||(i==2&&j==51)||(i==3&&((j>=3&&j<=5)||j==8||j==9||j==22||j==23||j==44||j==45||j==49||j==50))||(i==4&&(j==5||j==49)))
printf("*");
else printf(" ");
}
c++;
b--;
printf("\n");
}
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
for(i=1;i<=row;i++)
{
for(j=1;j<=column;j++)
{
if(((i>=1&&i<=3)&&(j==c||j==b))||j==(c+20)||j==(b+23)||j==1||j==12||j==19||j==21||j==43||j==48||((i==1||i==5)&&((j>=2&&j<=5)||j==50||(j>=22&&j<=24)||(j>=28&&j<=30)||(j>=44&&j<=46)))||(i==1&&(j==8||j==9||j==49))||(i>=2&&(j==7||j==10))||((i>=2&&i<=4)&&(j==27||j==31))||(i==2&&j==51)||(i==3&&((j>=3&&j<=5)||j==8||j==9||j==22||j==23||j==44||j==45||j==49||j==50))||(i==4&&(j==5||j==49)))
printf("*");
else printf(" ");
}
c++;
b--;
printf("\n");
}
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
for(i=1;i<=row;i++)
{
for(j=1;j<=column;j++)
{
if(((i>=1&&i<=3)&&(j==c||j==b))||j==(c+20)||j==(b+23)||j==1||j==12||j==19||j==21||j==43||j==48||((i==1||i==5)&&((j>=2&&j<=5)||j==50||(j>=22&&j<=24)||(j>=28&&j<=30)||(j>=44&&j<=46)))||(i==1&&(j==8||j==9||j==49))||(i>=2&&(j==7||j==10))||((i>=2&&i<=4)&&(j==27||j==31))||(i==2&&j==51)||(i==3&&((j>=3&&j<=5)||j==8||j==9||j==22||j==23||j==44||j==45||j==49||j==50))||(i==4&&(j==5||j==49)))
printf("*");
else printf(" ");
}
c++;
b--;
printf("\n");
}
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
for(i=1;i<=row;i++)
{
for(j=1;j<=column;j++)
{
if(((i>=1&&i<=3)&&(j==c||j==b))||j==(c+20)||j==(b+23)||j==1||j==12||j==19||j==21||j==43||j==48||((i==1||i==5)&&((j>=2&&j<=5)||j==50||(j>=22&&j<=24)||(j>=28&&j<=30)||(j>=44&&j<=46)))||(i==1&&(j==8||j==9||j==49))||(i>=2&&(j==7||j==10))||((i>=2&&i<=4)&&(j==27||j==31))||(i==2&&j==51)||(i==3&&((j>=3&&j<=5)||j==8||j==9||j==22||j==23||j==44||j==45||j==49||j==50))||(i==4&&(j==5||j==49)))
printf("*");
else printf(" ");
}
c++;
b--;
printf("\n");
}
break;
}

}
}
}

return 0;
}
