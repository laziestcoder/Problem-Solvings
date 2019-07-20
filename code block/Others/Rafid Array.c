‪#‎include‬<stdio.h>

int main()
{
int i,j,k,n,temp,length;
printf("Enter The array length: ");
scanf("%d",&length);
int num[length];
for(k=0;k<length;k++)
{
scanf("%d",&num[k]);
}
for(i=0;i<length-1;i++)
{
for(j=0;j<length-1-i;j++)
{
if(num[j]<num[j+1])
{
temp = num[j+1];
num[j+1]=num[j];
num[j]=temp;
}
}
}
printf("Increasing Order: ");
for(n=0;n<length;n++)
{
printf("%d ",num[n]);
}

printf("\ndecreasing Order: ");
for(n=length-1;n>=0;n--)
{
printf("%d ",num[n]);
}
return 0;
}
