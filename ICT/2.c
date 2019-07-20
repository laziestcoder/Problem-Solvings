#include<stdio.h>
#include<math.h>
#include<conio.h>
int main ()
{
    int x,n,a;
    float m,s;
    printf("Enter the number x");
    scanf("%d",&x);
    printf("Enter the power n");
    scanf("%d",&n);
    s=0;
    for(a=1; a<=x; a++)
    {
        m=pow(a,n);
        printf("%.0f\n",m);
        s=s+m;
    }
    printf("\n%.0f\n",s);
    getch();

}
