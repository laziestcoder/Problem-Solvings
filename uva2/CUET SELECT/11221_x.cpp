#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    int tc,i,j,k,l,cs=0;
    string s,s1,s2,s3,s4;
    cin>>tc;
    cin.ignore();
    while(tc--)
    {
        char ch;
        s=s1=s2=s3=s4="";
        while(ch=getchar())
        {
            if(ch=='\n')
                break;
            if(ch>='a' && ch<='z')
                s+=ch;
        }
        l=s.size();
        //cout<<l<<endl;
        int d=sqrt(l);
        cout<<"Case #"<<++cs<<":\n";
        if(d*d!=l)
        {
            cout<<"No magic :("<<endl;
            continue;
        }
        s1=s.substr(0,d);
        s4=s.substr(l-d,l);
        for(i=0; s[i]; i=i+d)
            s2+=s[i];
        for(i=d-1; i<l-d; i=i+d)
            s3+=s[i];
        s3+=s[l-1];
        l=s3.size();
        for(i=0; i<s3.size()/2; i++)
        {
            ch=s3[i];
            s3[i]=s3[--l];
            s3[l]=ch;
        }
        l=s4.size();
        for(i=0; i<s4.size()/2; i++)
        {
            ch=s4[i];
            s4[i]=s4[--l];
            s4[l]=ch;
        }
        //cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<endl;
        if(s1==s2 && s1==s3 && s1==s4)
            cout<<d<<endl;
        else
            cout<<"No magic :("<<endl;
    }
    return 0;
}
