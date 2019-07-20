#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;

    string b;
    cin >>b;

    if(n>26)
    {
        cout<<"-1"<<endl;
        return 0;
    }


    int i,a[30]= {0},f=0,fl=0;
    for(i=0; i<b.size() ; i++)
        a[b[i]-'a']++;

    for(i=0; i<=26; i++)
    {
        if(a[i]>0)
            f+=a[i]-1;
        if(a[i]>26)
            fl=1;
    }
    if(fl==1 || n>26 || f>25)
        cout<<"-1"<<endl;
    else
        cout<<f<<endl;

    return 0;
}
