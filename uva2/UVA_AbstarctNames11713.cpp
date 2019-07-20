/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[30],s2[30],con1[30],con2[30];
    int i,t,l1,l2,j,c1,c2,v1,v2,k,l,a,b,f;
    cin>>t;
    getchar();
    for(i=1; i<=t; i++)
    {
        a=0;
        b=0;
        l=0;
        f=0;
        v1=0;
        v2=0;
        c1=0;
        c2=0;
        gets(s1);
        gets(s2);
        l1=strlen(s1);
        l2=strlen(s2);
        if(l1!=l2)
            cout<<"No"<<endl;

        else
        {
            for(j=0; j<l1; j++)
            {

                if(!(s1[j]=='a' || s1[j]=='e'|| s1[j]=='i' || s1[j]=='o' || s1[j]=='u'))
                {
                    c1++;
                    con1[a++]=s1[j];
                }
                if(!(s2[j]=='a' || s2[j]=='e'|| s2[j]=='i' || s2[j]=='o' || s2[j]=='u'))
                {
                    c2++;
                    con2[b++]=s2[j];
                }
            }
            v1=l1-c1;
            v2=l2-c2;
            if(v1==v2)
            {
                for(l=0; l<a; l++)
                {
                    if(con1[l]==con2[l])
                        f=1;
                    else
                    {
                        f=0;
                        cout<<"No"<<endl;
                        break;
                    }
                }
                if(f==1)
                    cout<<"Yes"<<endl;
            }
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}
