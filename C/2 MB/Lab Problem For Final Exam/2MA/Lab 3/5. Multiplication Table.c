/*Write a program to display the multiplication table as in the following example:
                                        X * 1   = Y
                                              ….
                                        X * 10 = Y
*/
#include<stdio.h>
int main()
{
    int i,x;
    printf("Input the value of x : ");
    scanf("%d",&x);
    for(i=1;i<=10;i++)
        printf("%d X %d = %d\n",x,i,x*i);
    return 0;
}
