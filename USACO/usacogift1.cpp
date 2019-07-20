/**
ID: TOWFIQUL ISLAM
PROG: gift1
LANG: C++11
**/

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");

    int mo[11]= {0},z,fn,t=0,i,j,k,sum,p,d,x[11]= {0},y[11]= {0};
    string na[13] , s;
    fin>>t;
        for(i=0; i<t; i++)
        {
            fin >> na[i];
            mo[i]=0;
            x[i]=0;
            y[i]=0;
        }

        for(i=0; i<t; i++)
        {
            fin>> s;
            for(p=0; p<t ; p++)
            {
                if(na[p]==s)
                {
                    fin >> x[p] >> y[p];
                    sum=0;
                    d=0;
                        z=y[p];
                        if(x[p]==0 || y[p]==0)
                            mo[p]+=0;
                        else
                        {
                            sum=x[p]/y[p];
                            mo[p]-=(sum*y[p]);
                        }
                        j=1;

                        while(j<=z)
                        {
                            fin>> s;
                            for(k=0; k<t; k++)
                            {
                                if(na[k]==s)
                                {
                                    mo[k]+=sum;
                                    break;
                                }
                            }
                            j++;

                        }

                    break;
                }
            }

        }

        for(i=0; i<t; i++)
        {
            fout << na[i] << " " << mo[i] <<endl;
        }
    return 0;
}
