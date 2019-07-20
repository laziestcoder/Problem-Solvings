#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,dis,root1,root2;

    scanf("%f %f %f",&a,&b,&c);
    dis=b*b-4*a*c;

    if(dis<0)
        printf("\nRoots are imaginary");

      else
      {
            root1=(-b+ sqrt(dis))/2.0*a;
            root2=(-b- sqrt(dis))/2.0*a;
            printf("Root1 = %f,Root2 = %f",root1,root2);
      }


}
