#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int a;
    char ch,dummy;
    scanf("%d",&a);
    printf("%d\n",a);
    scanf("%c",&dummy); // dummy for the newline(\n) from first input(a)
    scanf("%c",&ch);
    printf("%c",ch);
    return 0;
}
