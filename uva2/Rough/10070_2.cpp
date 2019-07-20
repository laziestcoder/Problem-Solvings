#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ///freopen("10070in.txt", "r", stdin );
    ///freopen("10070out.txt", "w", stdout );
    int t=0,x=0;
    while(scanf("%d",&x)!=EOF)
    {
        if(t>0)
        cout << endl;
       t++;
       if(x>=2000){
        if(x%400==0 || (x%4==0 && x%100!=0))
        {
            cout << "This is leap year." << endl;
            if(x%15==0)
                cout << "This is huluculu festival year." << endl;
            if(x%55==0)
                cout << "This is bulukulu festival year." << endl;
        }
        else if(x%15==0)
            cout << "This is huluculu festival year." << endl;
        else if(x%55==0)
            cout << "This is bulukulu festival year." << endl;
        else
            cout << "This is an ordinary year." << endl;


    }
    }

    return 0;
}
