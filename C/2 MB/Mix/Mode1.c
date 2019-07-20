#include<stdio.h>

int main()
{
int i,j,k=1,p,a[20],b[20],n,cnt=1,big;
printf("Enter the maximum number of elements\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=1; i<=n; i++)
scanf("%d",&a[i]);
for(i=1; i<=n; i++)
{
for(j=i+1;j<=n; j++)
{
if(a[i]==a[j])
cnt++;
}
b[k]=cnt;
k++;
cnt=1;
}

big=b[1];
p=1;
for(i=2; i<=n; i++)
{
if(big<b[i])
{
big=b[i];
p=i;
}
}
printf("The element that occurs offenly is %d\n",a[p]);
printf("And it has occurred %d times\n",b[p]);
return 0;
}
