#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,r,temp,tr,gcd,lcm,i,pro;
    scanf("%d",&tr);
    for(i=1;i<=tr;i++)
        {
            scanf("%d%d",&num1,&num2);
            pro=num1*num2;
            if(num1<num2)
            {
                temp=num1;
                num1=num2;
                num2=temp;
            }
            while(num1%num2!=0)
            {
                r=num1%num2;
                num1=num2;
                num2=r;
            }
            gcd=num2;
            lcm=pro/num2;
            printf("%d %d %d\n",i,lcm,gcd);
        }
    return 0;
}
