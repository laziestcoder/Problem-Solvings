#include<cstdio>
//#include<math.h>
using namespace std;
int main ()
{
    unsigned long long int a,b;
    while(scanf("%llu%llu",&a,&b)!=EOF) //%I64u or %llu
    {
        if(a>b)
        printf("%llu\n",a-b);
        else
        printf("%llu\n",b-a);
    }
    return 0;
}

//#include<cstdio>
//
//int main()
//{
//    unsigned long long a, b;
//    while(scanf("%llu %llu", &a, &b) != EOF)
//    {
//        if(a > b)
//            printf("%llu\n", a - b);
//        else
//            printf("%llu\n", b - a);
//    }
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//
//char* sub(char x[100],char y[100])
//{
//    int i,j,temp=0;
//    char z[100]= {'0'};
//    for(i=0; i<100; i++)
//    {
//        z[i]='0';
//    }
//    for(i=100; i>=0; i--)
//    {
//        temp=x[i]-y[i];
//        if(temp>=0)
//        {
//            z[i]=temp+48;
//        }
//        else
//        {
//            j=i-1;
//            while(x[j]=='0')
//            {
//                x[j]='9';
//                j--;
//            }
//            x[j]=x[j]-1;
//            z[i]=((x[i]-48)-(y[i]-48)+10)+48;
//        }
//    }
//    for(i=0; i<100; i++)
//    {
//        x[i]=z[i];
//    }
//    return z;
//}
//int main ()
//{
//    char a[100], b[100];
//    while(scanf("%s%s",a,b)!=EOF)
//    {
//        printf("%s\n",sub(a,b));
//    }
//    return 0;
//}
