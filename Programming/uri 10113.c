#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a>b && a>c){
    printf("%d eh o maior",a);
    }
    else if(b>a && b>c){
    printf("%d eh o maior",b);}
    else{
    printf("%d eh o maior",c);}
    return 0;
}
