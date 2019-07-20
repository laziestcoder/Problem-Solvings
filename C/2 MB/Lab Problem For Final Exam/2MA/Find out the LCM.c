#include<stdio.h>
int main()
{
    int a,b,d,r,x,y,lcm;
    scanf("%d%d",&a,&b);
    x=a;
    y=b;
    while(1)//Infinity loop chalano hocche,
    {       //onno loop chalanor moto condition nai
        d=a/b;
        r=a%b;
        if(r==0)
            break;//loop theke ber haoar moto condition nai, tai break kora hocche
        else
        {
            a=b;
            b=r;
        }
    }
    printf("GCD: %d",b);
    lcm=(x*y)/b;
    printf("\nLCM: %d",lcm);
    return 0;
}

