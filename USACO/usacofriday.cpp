/**
  ID: TOWFIQUL ISLAM
PROG: friday
LANG: C++11
**/
#include<bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
    long long int n, b[9]= {0},i,k=1,l=1,j,d,m[13]= {31,28,31,30,31,30,31,31,30,31,30,31,'\0'};
    fin >> n ;

    for(i=1900; i<=(1900+n-1) ; i++)
    {
        if( (i%4==0 && i%100!=0) || (i%400==0))
            m[1]=29;
        else
            m[1]=28;
        for(k=0; k<=11; k++)
        {
            for(j=1 ; j<=m[k]; j++ )
            {
                if( j==13 )
                {
                    d=l;
                    d=d%7;
                    b[d]++;
                }
                l++;
            }
        }
    }
     fout<<b[6]<<" ";
    for(i=0 ; i<=5 ; i++)
            {
                fout << b[i];
                if(i<5)
                    fout<<" ";
            }

        fout<<endl;

    return 0;
}
