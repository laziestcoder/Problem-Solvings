#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,x,i,y;
    cin>> x>>y;
    c=0;

    for(i=x;i<=y;i++)
    {
        b=i;
        a=i;
        while(1)
        {

            a=b%10;
            if(a==0)      c+=6;
            else if(a==1) c+=2;
            else if(a==2) c+=5;
            else if(a==3) c+=5;
            else if(a==4) c+=4;
            else if(a==5) c+=5;
            else if(a==6) c+=6;
            else if(a==7) c+=3;
            else if(a==8) c+=7;
            else if(a==9) c+=6;
            b=b/10;
            if(b==0)
                break;
        }
    }
    cout << c<<endl;
    return 0;
}
