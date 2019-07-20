#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,n,cn,i,j[]={31,29,31,30,31,30,31,31,30,31,30,31},k[]={0,4,5,6,7,1,2,3};
    string b;
    cin>>a;
    getline(cin,b);
    cn=0;
    if(b[4]=='w')
        {
            for(i=k[a];i<=366;i=i+7)
            {
                cn++;
            }
            
        }
    else if(b[4]=='m')
        {
            for(i=0;i<12;i++)
            {
                if(j[i]>=a)
                cn++;
            }
            
        }
    
    cout<<cn<<endl;

    return 0;
}