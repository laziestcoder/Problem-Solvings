#include<bits/stdc++.h>
using namespace std;

int main ()
{
    freopen("Cin.txt","r", stdin);
    int n,num[105],x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20;
    int i,j,x;
    while(scanf("%d",&n)!=EOF)
    {
    x0=0;
    x1=0;x2=0;x3=0;x4=0;x5=0;x6=0;x7=0;x8=0;x9=0;
    x10=0;x11=0;x12=0;x13=0;x14=0;x15=0;x16=0;x17=0;x18=0;x19=0;x20=0;

        if(n>0)
        {
            j++;
            for(i=0; i<n; i++)
            {
                scanf("%d",&num[i]);
            }
            x=n-1;
            sort(num,num+x);
            if(num[0]>0)
            {
                for(i=0; i<n; i++)
                {
                    if(num[i]>0 && num[i]<=10) x0++;
                        if(num[i]>=11 && num[i]<=20) x1++;
                        if(num[i]>=21 && num[i]<=30) x2++;
                        if(num[i]>=31 && num[i]<=40) x3++;
                        if(num[i]>=41 && num[i]<=50) x4++;
                        if(num[i]>=51 && num[i]<=60) x5++;
                        if(num[i]>=61 && num[i]<=70) x6++;
                        if(num[i]>=71 && num[i]<=80) x7++;
                        if(num[i]>=81 && num[i]<=90) x8++;
                        if(num[i]>=91 && num[i]<=100) x9++;
                }
                printf("Case %d:\n",j);
                if(x0>0 || x1>0 || x2>0 || x3>0 || x4>0 || x5>0 || x6>0 || x7>0 || x8>0 || x9>0)
                    {
                        printf("   1 to   10 : ");
                    for(i=1; i<=x0; i++) printf("*");
                    cout << endl;
                    }
                if(x1>0 || x2>0 || x3>0 || x4>0 || x5>0 || x6>0 || x7>0 || x8>0 || x9>0 ){
                    printf("  11 to   20 : ");
                    for(i=1; i<=x1; i++) printf("*");cout << endl;}
                    if(x2>0 || x3>0 || x4>0 || x5>0 || x6>0 || x7>0 || x8>0 || x9>0 ){
                    printf("  21 to   30 : ");
                    for(i=1; i<=x2; i++) printf("*");cout << endl;}
                    if(x3>0 || x4>0 || x5>0 || x6>0 || x7>0 || x8>0 || x9>0){
                    printf("  31 to   40 : ");
                    for(i=1; i<=x3; i++) printf("*");cout << endl;}
                    if(x4>0 || x5>0 || x6>0 || x7>0 || x8>0 || x9>0){
                    printf("  41 to   50 : ");
                    for(i=1; i<=x4; i++) printf("*");cout << endl;}
                    if(x5>0 || x6>0 || x7>0 || x8>0 || x9>0){
                    printf("  51 to   60 : ");
                    for(i=1; i<=x5; i++) printf("*");cout << endl;}
                    if(x6>0 || x7>0 || x8>0 || x9>0){
                    printf("  61 to   70 : ");
                    for(i=1; i<=x6; i++) printf("*");cout << endl;}
                    if(x7>0 || x8>0 || x9>0){
                    printf("  71 to   80 : ");
                    for(i=1; i<=x7; i++) printf("*");cout << endl;}
                    if(x8>0 || x9>0){
                    printf("  81 to   90 : ");
                    for(i=1; i<=x8; i++) printf("*");cout << endl;}
                    if(x9>0){
                    printf("  91 to  100 : ");
                    for(i=1; i<=x9; i++) printf("*");cout << endl;}
            }
            else
            {

                for(i=0; i<n; i++)
                {
                    if(num[i]>=0 && num[i]<=9) x0++;
                    if(num[i]>=10 && num[i]<=19) x1++;
                    if(num[i]>=20 && num[i]<=29) x2++;
                    if(num[i]>=30 && num[i]<=39) x3++;
                        if(num[i]>=40 && num[i]<=49) x4++;
                        if(num[i]>=50 && num[i]<=59) x5++;
                        if(num[i]>=60 && num[i]<=69) x6++;
                        if(num[i]>=70 && num[i]<=79) x7++;
                        if(num[i]>=80 && num[i]<=89) x8++;
                        if(num[i]>=90 && num[i]<=99) x9++;
                        if(num[i]>=90 && num[i]<=99) x9++;
                        if(num[i]>=100 && num[i]<=109) x10++;

                    if(num[i]<=-1 && num[i]>=-10) x11++;
                    if(num[i]<=-11 && num[i]>=-20) x12++;
                    if(num[i]<=-21 && num[i]>=-30) x13++;
                    if(num[i]<=-31 && num[i]>=-40) x14++;
                        if(num[i]<=-41 && num[i]>=-50) x15++;
                        if(num[i]<=-51 && num[i]>=-60) x16++;
                        if(num[i]<=-61 && num[i]>=-70) x17++;
                        if(num[i]<=-71 && num[i]>=-80) x18++;
                        if(num[i]<=-81 && num[i]>=-90) x19++;
                        if(num[i]<=-91 && num[i]>=-100) x20++;
                }
                printf("Case %d:\n",j);
                 if(x11>0 || x12>0  ||x13>0 || x14>0 ||  x15>0 ||x16>0 ||x17>0 ||x18>0 || x19>0 ||x20>0)
                        { printf("-100 to  -91 : "); for(i=1; i<=x20; i++) printf("*"); cout << endl;}
                     if(x14>0 ||x13>0 ||x12>0 || x15>0 ||x16>0 ||x17>0 ||x18>0 || x19>0 ||x11>0 )
                        { printf(" -90 to  -81 : "); for(i=1; i<=x19; i++) printf("*"); cout << endl;}
                     if(x14>0 ||x13>0 ||x12>0 || x15>0 ||x16>0 ||x17>0 ||x18>0 || x11>0 ||x0>0 )
                        { printf(" -80 to  -71 : "); for(i=1; i<=x18; i++) printf("*"); cout << endl;}
                     if(x14>0 ||x13>0 ||x12>0 || x15>0 ||x16>0 ||x17>0 ||x11>0 ||x0>0 )
                        { printf(" -70 to  -61 : "); for(i=1; i<=x17; i++) printf("*"); cout << endl;}
                     if(x14>0 ||x13>0 ||x12>0 || x15>0 ||x16>0 ||x11>0 ||x0>0 )
                        { printf(" -60 to  -51 : "); for(i=1; i<=x16; i++) printf("*"); cout << endl;}
                     if(x14>0 ||x13>0 ||x12>0 || x15>0 ||x11>0)
                        { printf(" -50 to  -41 : "); for(i=1; i<=x15; i++) printf("*"); cout << endl;}
                     if( x14>0 ||x13>0 ||x12>0 || x11>0 )
                        { printf(" -40 to  -31 : "); for(i=1; i<=x14; i++) printf("*"); cout << endl;}

                     if(x13>0 ||x12>0 || x11>0)
                        { printf(" -30 to  -21 : "); for(i=1; i<=x13; i++) printf("*"); cout << endl;}

                     if(x12>0 ||x11>0)
                        { printf(" -20 to  -11 : "); for(i=1; i<=x12; i++) printf("*"); cout << endl;}

                    if(x11>0)
                        { printf(" -10 to   -1 : "); for(i=1; i<=x11; i++) printf("*"); cout << endl;}





                    if(x0>0 || x1>0 || x2>0 || x3>0 || x4>0 || x5>0 || x6>0 || x7>0 || x8>0 || x9>0 || x10>0)
                    {printf("   0 to    9 : ");
                    for(i=1; i<=x0; i++) printf("*");cout << endl;}
                    if(x1>0 || x2>0 || x3>0 || x4>0 || x5>0 || x6>0 || x7>0 || x8>0 || x9>0 || x10>0){
                    printf("  10 to   19 : ");
                    for(i=1; i<=x1; i++) printf("*");cout << endl;}
                    if(x2>0 || x3>0 || x4>0 || x5>0 || x6>0 || x7>0 || x8>0 || x9>0 || x10>0){
                    printf("  20 to   29 : ");
                    for(i=1; i<=x2; i++) printf("*");cout << endl;}
                    if(x3>0|| x4>0 || x5>0 || x6>0 || x7>0 || x8>0 || x9>0 || x10>0){
                    printf("  30 to   39 : ");
                    for(i=1; i<=x3; i++) printf("*");cout << endl;}
                    if(x4>0 || x5>0 || x6>0 || x7>0 || x8>0 || x9>0 || x10>0){
                    printf("  40 to   49 : ");
                    for(i=1; i<=x4; i++) printf("*");cout << endl;}
                    if(x5>0 || x6>0 || x7>0 || x8>0 || x9>0 || x10>0){
                    printf("  50 to   59 : ");
                    for(i=1; i<=x5; i++) printf("*");cout << endl;}
                    if(x6>0 || x7>0 || x8>0 || x9>0 || x10>0){
                    printf("  60 to   69 : ");
                    for(i=1; i<=x6; i++) printf("*");cout << endl;}
                    if(x7>0 || x8>0 || x9>0 || x10>0){
                    printf("  70 to   79 : ");
                    for(i=1; i<=x7; i++) printf("*");cout << endl;}
                    if(x8>0 || x9>0 || x10>0){
                    printf("  80 to   89 : ");
                    for(i=1; i<=x8; i++) printf("*");cout << endl;}
                    if(x9>0 || x10>0){
                    printf("  90 to   99 : ");
                    for(i=1; i<=x9; i++) printf("*");cout << endl;}
                    if(x10>0){
                    printf(" 100 to  109 : ");
                    for(i=1; i<=x9; i++) printf("*");cout << endl;}
                }

            }
else
            return 0;
    }
    return 0;
}

