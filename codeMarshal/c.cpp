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



int main ()
{
    int t,k,n;
    scanf("%d",&t);
    for(k=1; k<=t; k++)
    {
        int sum=0,f=0;
        cin>>n;
        int m[n+1][n+1];
        int i,j;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>m[i][j];
                //cout<<m[i][j];
            }
            //cout<<endl;
        }


        int s[15],p=0;

        for(p=1; p<=10; p++)
            s[p]=p;



        for(int q=0; q<n; q++)
        {
            int d=1;f=0;
            for(p=1; p<=10; p++)
            {
                s[p]=p;
            }
            for(i=q; i<n; i++)
            {
                for(j=0; j<n; j++)
                {
                    if(s[m[i][j]]!=0)
                    {
                        s[m[i][j]]=0;
                        for(p=1; p<=10; p++)
                        {
                            if(s[p]!=0)
                            {
                                f=1;
                                break;
                            }
                            else
                                f=0;
                        }

                        if(f!=1)
                        {
                            if(i>0)
                            {
                                if(j==n-1)
                                {
                                    sum++;
                                    d=0;
                                }
                            }
                            else
                            {
                                sum++;
                                d=0;
                            }
                        }
                       // cout<<"sum="<<sum<<"i="<<i<<"j="<<j<<endl;
                    }
                }
                if(d==0)
                    break;
            }
        }
         for(int q=0; q<n; q++)
        {
            int d=1;f=0;
            for(p=1; p<=10; p++)
            {
                s[p]=p;
            }

        for(j=q; j<n; j++)
            {
                for(i=0; i<n; i++)
                {
                    if(s[m[i][j]]!=0)
                    {
                        s[m[i][j]]=0;
                        for(p=1; p<=10; p++)
                        {
                            if(s[p]!=0)
                            {
                                f=1;
                                break;
                            }
                            else
                                f=0;
                        }

                        if(f!=1)
                        {
                            if(j>0)
                            {
                                if(i==n-1)
                                {
                                    sum++;
                                    d=0;
                                }
                            }
                            else
                            {
                                sum++;
                                d=0;
                            }
                        }
                       // cout<<"sum="<<sum<<"j="<<j<<"i="<<i<<endl;
                    }
                }
                if(d==0)
                    break;
            }
        }

        printf("Case %d: %d\n",k,sum);
    }

    return 0;
}

