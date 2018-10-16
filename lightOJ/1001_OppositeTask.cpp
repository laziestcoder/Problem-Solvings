#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,t,b[11]= {0},c[21]= {0};
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(a<=10)
            cout<<b[a]<<" "<<a-b[a]<<endl;

        else if(a>10 && a<20)
            cout<<a-10+c[a]<<" "<<10-c[a]<<endl;
        else
            cout<<10<<" "<<10<<endl;


        if(a<=10)
        {
            b[a]++;
            if( b[a] >a )
                b[a]=0;
            else if(b[a]>10)
                b[a]=0;
        }
        else if(a>10)

        {
            c[a]++;
            if(c[a]>20-a)
                c[a]=0;
            else if(c[a]>10)
                c[a]=0;
        }



    }
    return 0;
}
