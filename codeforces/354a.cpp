#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,n,s1=0,s2=0;
    cin>>n;
        t=n;
        n=0;
        while(1)
        {
            n++;
            if(n>t)
                break;
            int num;
            cin>>num;
            if(num==1)
                s1=n;
            else if(num==t)
                s2=n;
        }

        cout<<max(max(abs(s1-1),abs(s1-t)),max(abs(s2-1),abs(s2-t)))<<endl;
    return 0;
}
