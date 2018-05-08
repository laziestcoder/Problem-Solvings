/******

     * Name: Towfiqul Islam
     * CSE, IIUC.
     * Chittagong , Bangladesh.
     * mail ID: towfiq.106@gmail.com

*****/
/****************************** header files *******************************************/
/***
#pragma comment(linker, "/STACK:33554432") //32 MB
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <queue>
#include <stack>
#include <vector>
#include <deque>
#include <functional>
#include <string>
#include <iostream>
#include <cctype>
#include <set>
#include <climits>
#include <iomanip>
#include <cassert>
#include <unordered_map>
#include<sstream>
#include<cstdlib>
#include<fstream>
#include<iterator>
#include<ctime>
***/

#include <bits/stdc++.h>
using namespace std;

#define optimize ios_base::sync_with_stdio(false); cin.tie(NULL)
/******************************** header files end **********************************/
typedef unsigned long long uvlong;
inline uvlong power ( uvlong a, uvlong p )
{
    uvlong res = 1, x = a;
    while ( p )
    {
        if ( p & 1 ) res = ( res * x );
        x = ( x * x );
        p >>= 1;
    }
    return res;
}
inline uvlong sod(uvlong n)
{
    int sum=0;
    while(n>=10){
        sum+=n%10;
        n=n/10;
    }
    return sum+n;
}
uvlong func(uvlong n)
{
        while (n >= 10) {
        n=sod(n);
   }
   return n;
}

int main ()
{
    optimize;
    uvlong x,a,b;
    //string a,b;
    int t,i;
    cin>>t;
    for(i=1; i<=t; i++){
    cin>>a>>b;
   // cout<<power(a,b);
    x=func(power(a,b));
    printf("Case %d: %u\n",i,x);
    }
    return 0;
}


