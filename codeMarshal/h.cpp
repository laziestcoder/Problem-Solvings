/******

     * Name: Towfiqul Islam
     * CSE, IIUC.
     * Chittagong , Bangladesh.
     * mail       ID: towfiq.106@gmail.com

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


/******************************** header files end **********************************/
#define vlong long long
vlong modpower(vlong b, vlong n, vlong m)    //b=base, n=power, m=mod
{
    vlong r = 1;
    while(n > 0)
    {
        if(n & 1)
        {
            r = r * b;
            if(r >= m) r %= m;
        }
        n >>= 1;
        b = b * b;
        if(b >= m) b %= m;
    }
    return r % m;
}
vlong fib(vlong n, vlong m)
{
    vlong a1=2,a2=3,s=0;
    if(n==1) return a1;
    else if(n==2) return a2;
    for(int i=3;i<=n; i++)
    {
        s=a1+a2;
        a1=a2;
        a2=s%m;
        //cout <<s<<endl;
    }
    return s%m;
}

int main ()
{

    int t,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        vlong n,k,m,x,y;
        cin>>n>>k>>m;
        x=fib(n,m);
        y=modpower(k,x,m);
        //y=pow(k,x);
        cout<<"Case "<<i<<": "<<y<<endl;

    }

    return 0;
}

