#include<bits/stdc++.h>
using namespace std;
#define debug cout<< "debug" << endl;

int main ()
{

    int mo[11]= {0},z,fn,t=0,i,j,k,sum,p,d,x[11]= {0},y[11]= {0},nl=0;
    string na[13] , s;
    while(scanf("%d",&t)!=EOF)
    {
        if(nl>0)
            cout <<"\n";

        for(i=0; i<t; i++)
        {
            cin >> na[i];
            mo[i]=0;
            x[i]=0;
            y[i]=0;
        }

        for(i=0; i<t; i++)
        {
            cin>> s;
            for(p=0; p<t ; p++)
            {
                if(na[p]==s)
                {
                    cin >> x[p] >> y[p];
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
                            cin>> s;
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
            cout << na[i] << " " << mo[i] <<endl;
        }
        nl=1;


    }
    return 0;
}
