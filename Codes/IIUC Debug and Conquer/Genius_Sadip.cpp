/**
    Team Name   : IIUC Debug & Conquer
    Varsity     : International Islamic University Chittagong
**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double w1, w2, h1, H, k, l;
    int j;
    scanf("%d", &j);
    while(j--)
    {

        scanf("%Lf%Lf%Lf%Lf", &w1, &w2, &h1, &H);
        l = 1.0+(w2/w1);
        k = h1 * l;
        printf("%.3f\n", k);
    }
    return 0;
}
