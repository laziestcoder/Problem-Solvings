
‪#‎include‬ <stdio.h>
int i=0,a=0,b=1,c,limit;
void fibonacci(i)
{
if(i<limit){
if(i==0){
printf("%d\n",i);
i++;
fibonacci(i);
}
else{
c=a;
a=a+b;
printf("%d\n",a);
b=c;
i++;
fibonacci(i);
}
}
else{
printf("Finish");
}
}
int main()
{
printf("input the length:");
scanf("%d",&limit);
fibonacci(i);

}
