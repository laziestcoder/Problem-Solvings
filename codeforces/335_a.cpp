#include<bits/stdc++.h>
using namespace std;

int main ()
{

    int a,b,c,x,y,z,d1,d2,d3;
    scanf("%d%d%d",&a,&b,&c);

        scanf("%d%d%d",&x,&y,&z);
        if(a>=x   &&  b>=y && c>=z)
            cout << "Yes";
        else if(a<x && b<y && c<z)
            cout << "No";
        else
        {

            if(c<z)
            {
                d3=z-c;
                if(b>y)
                  {
                      b=b-(d3*2);
                      c=c+d3;
                  }
                else if(a>x)
                    {
                        a=a-(d3*2);
                        c=c+d3;
                    }

            }
             if(b<y)
            {
                d2=y-b;

                if (a>x)
                 {
                     a=a-(d2*2);
                     b=b+d2;
                 }
                else if (c>z)
                  {
                      c=c-(d2*2);
                      b=b+d2;
                  }

            }
            if(a<x)
            {
                d1=x-a;

                if(c>z)
                 {
                     c=c-(d1*2);
                     a=a+d1;
                 }
                else if(b>y)
                  {
                      b=b-(d1*2);
                      a=a+d1;
                  }
            }

            if(a>=x   &&  b>=y && c>=z)
                cout << "Yes";
            else
                cout << "No";
        }



    return 0;
}
