// I I U P C   2 0 1 4 Problem I: Armstrong Number
#include <stdio.h>
int main()
{
  int n, n1, rem, num=0,tc,i;
  scanf("%d",&tc);
  for(i=0;i<tc;i++)
  {
        scanf("%d", &n);
        n1=n;
        while(n1!=0)
        {
            rem=n1%10;
            num+=rem*rem*rem;
            n1/=10;
        }
        if(num==n)
            printf("Armstrong\n");
        else
            printf("Not Armstrong\n");
  }
  return 0;
}
