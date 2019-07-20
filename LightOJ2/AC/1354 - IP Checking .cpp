#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //freopen("in.txt","r",stdin);

    int a,b,c,d,a1[4],t,i,j;
    string s;

    cin>>t;

    for(i=1; i<=t; i++)
    {

        scanf("%d.%d.%d.%d",&a,&b,&c,&d);
        cin>>s;

        int q=3,x=0,p=0;

        for(j=s.length()-1; j>=-1; j--){
                if(s[j]=='.' || j==-1){
                    a1[q]=x;
                    x=0;
                    p=0;
                    q--;
                    //cout<<".";
                    continue;
                }
                //cout<<s[j];
                x = x + ((s[j]-'0'+0)*pow(2,p));
                p++;
        }
//        cout<<a<<" " <<a1[0] <<endl;
//        cout<<b<<" " <<a1[1] <<endl;
//        cout<<c<<" " <<a1[2] <<endl;
//        cout<<d<<" " <<a1[3] <<endl;

        if( a==a1[0] && b==a1[1] && c==a1[2] && d==a1[3] )
        {
            cout<<"Case "<<i<<": Yes"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": No"<<endl;
        }
    }
    return 0;
}
