#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,a[11]= {0},i,j;
    string m;

   while(1){ /** remove it **/
        cin >> n >> m;
    for(j=0; m[j]!='\0'; j++)
        a[m[j]-'0']++;
    for(i=0; i<=9; i++)
    {
        if(a[i] == j )
        {
            cout<<"NO\n";
           return 0;
        }
    }

    if(n == 1)
        cout<<"NO\n";
    else if( n == 2 )

    {
        if(m=="10" || m=="20" || m=="30" ||m=="40" ||m=="50" ||m=="60" ||m=="70" ||m=="80" ||m=="90")
        cout<<"YES\n";
            else
        cout<<"NO\n";
    }
    else if(n == 3 )
    {
        if(m == "911" || m == "733" || m=="377" || m== "199" || m=="119" || m=="773"|| m=="337" || m=="991" || m=="159" || m=="951" || m=="753" || m=="357")
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else if(n==4)
    {
        if(m=="1590" || m=="0951" || m=="3570" || m=="0753"  || m=="2580" || m=="0852")
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else if(n==5)
    {
        if(m=="12345" || m=="23456" || m=="34567" || m=="45678" || m=="56789" || m=="67890")
            cout<<"NO\n";
        else
            cout<<"YES\n";

    }
    else if(n==6)
    {
        if(m=="235689" || m=="124578" || m=="215487" || m=="326598")
        cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    else
        cout<<"YES\n";
   } /** remove it **/


    return 0;
}
