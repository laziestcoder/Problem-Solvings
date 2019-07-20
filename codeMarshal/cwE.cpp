#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,c=0,d=0,x;
    long long int sum=0;
    while(scanf("%d",&n)!=EOF)
    {
        d=0;
        c=0;
        sum=n*n;
        for(i=1; i<= 9 ; i++)
        {
            x=sum%10;
            sum=sum/10;
            if(x==i && d==0)
             c++;
             else
                break;
        }
        if(d==0)
         cout << c <<"\n";
        else
            cout << "0\n";

    }

    return 0;
}

