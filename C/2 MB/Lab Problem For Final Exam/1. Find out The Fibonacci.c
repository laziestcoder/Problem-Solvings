#include<stdio.h>
int fib(int n)//Called Function
{
    int val;
    if(n==1||n==2)
        val=1;
    else
        val=fib(n-1)+fib(n-2);//Using Recursion
    return val;
}
int main()//Calling Function
{
    int res,x;
    scanf("%d",&x);
    res=fib(x);
    printf("%d",res);
    return 0;

}
