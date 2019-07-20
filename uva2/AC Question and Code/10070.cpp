#include<bits/stdc++.h>
using namespace std;

int main ()
{


    int p,t=0,i,s4,s100,s400,s15,s55;
    char x[1000000];

    while(scanf("%s",x)!=EOF)
    {
        s4=0;
        s100=0;
        s400=0;
        s15=0;
        s55=0;
        if(t>0)
            cout << endl;
        t++;

        p=strlen(x);

        for(i=0; i<p; i++)
        {
            s4=((s4*10)+(x[i]-'0'))%4;
            s100=((s100*10)+(x[i]-'0'))%100;
            s400=((s400*10)+(x[i]-'0'))%400;
            s15=((s15*10)+(x[i]-'0'))%15;
            s55=((s55*10)+(x[i]-'0'))%55;
        }
        if(s400==0 || (s4==0 && s100!=0))
        {
            cout << "This is leap year." << endl;
            if(s15==0)
                cout << "This is huluculu festival year." << endl;
            if(s55==0)
                cout << "This is bulukulu festival year." << endl;
        }
        else if(s15==0)
            cout << "This is huluculu festival year." << endl;
        else
            cout << "This is an ordinary year." << endl;


    }
    return 0;
}
