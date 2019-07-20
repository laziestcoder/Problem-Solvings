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
    char a[10],b[10];
    int x,y,carry,counter,l1,l2,i,l,j,sum;
    while(1)
    {
        gets(a);
        gets(b);
        if(a[0]=='0' && b[0]=='0')
            break;
        l1=strlen(a);
        l2=strlen(b);



        counter=0;
        carry=0;
        for(i=l1-1; i>=0; i--)
        {
            x=a[i]-'0';
            y=b[i]-'0';
            sum=x+y+carry;
            if(sum>=10)
            {
                counter++;
                carry++;
            }
        }
        if(counter==0)
            cout<<"No carry operation."<<endl;
        else if(counter==1)
            cout<<"1 carry operation."<<endl;
        else
            cout<<counter<<" carry operations."<<endl;
    }

}

