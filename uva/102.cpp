/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);

    long long int b1,g1,c1,b2,g2,c2,b3,g3,c3,bcg,bgc,cgb,cbg,gcb,gbc;
    while(scanf("%lld%lld%lld%lld%lld%lld%lld%lld%lld",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3) !=EOF)
    {
        bcg=b2+b3+c1+c3+g1+g2;//b2+b3+c3+c1+g1+g2;
        bgc=b2+b3+c1+c2+g1+g3;//b2+b3+g3+g1+c1+c2;

        cbg=b1+b3+c2+c3+g1+g2;//c2+c3+g3+g1+b1+b2;
        cgb=b1+b2+c2+c3+g1+g3;//c2+c3+b3+b1+g1+g2;

        gbc=b1+b3+c1+c2+g3+g2;//g2+g3+c3+c1+b1+b2;
        gcb=b2+b1+c1+c3+g3+g2;//g2+g3+b3+b1+c1+c2;

        long long int mn;
        mn=bcg;

        //cout<<mn<<endl;
        string s="BCG";

        if(mn>bgc)
        {
            mn=bgc;
            s="BGC";
        }
        if(mn>cbg)
        {
            mn=cbg;
            s="CBG";
        }
        if(mn>cgb)
        {
            mn=cgb;
            s="CGB";
        }

        if(mn>gbc)
        {
            mn=gbc;
            s="GBC";
        }
        if(mn>gcb)
        {
            mn=gcb;
            s="GCB";
        }
        cout<<s;
        printf(" %lld\n",mn);
    }
    return 0;
}
