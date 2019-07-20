#include<stdio.h>
int main()
{
    int a,b,c;
    scanf(" %d %d %d",&a,&b,&c);
    if(a>=b && b>=c){
        printf("The smallest number is:%d\nThe largest number is %d",c,a);
    }
    if(b>=c && c>=a){
        printf("The smallest number is:%d\nThe largest number is %d",a,b);
    }
     if(c>=a && a>=b){
        printf("The smallest number is:%d\nThe largest number is %d",b,c);
    }
    return 0;
}
