#include<stdio.h>
int main()
{
    int a,*p;
    a=5;
    printf("%d\n",a);
    printf("%d\n",*p);
    printf("%u\n",p);
    printf("%u\n",&p);
    a++;
    p--;
    printf("%u",p);
    p=p+3;
    printf("%u\n",p);

    return 0;
}
