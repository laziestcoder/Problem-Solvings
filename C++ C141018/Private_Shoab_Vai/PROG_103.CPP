// 100 digit ba tar beshi digit er integer input neya and sum kora
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a,b,c;
    int lena,lenb,dif,carry,lenc,i,val;

    cin >> a;
    lena = a.size();
    cin >> b;
    lenb = b.size();
    if(lena<lenb)
    {
        dif = lenb - lena;
        a.insert(0,dif,'0');
        lena=lenb;
    }
    else if(lenb < lena)
    {
        dif = lena - lenb;
        b.insert(0,dif,'0');
        lenb = lena;
    }
    c="";
    carry=0;
    for(i=lena-1;i>=0;i--)
    {
        val=(a[i]-'0')+(b[i]-'0')+carry;
        carry=val/10;
        val=val%10;
        c.insert(0,1,val+'0');
    }
    if(carry==1)
        c.insert(0,1,carry+'0');
    lenc=c.size();
    cout<<c<<endl;
    return 0;
}
