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
char letter[2000000];
int price[10000];
char text[5000000];
long long m,len,l;
double cost;
int main()
{
    int n,k,i,j;
    cin>>n;
    while(n--)
    {
        cost=0;
        cin>>k;
        for(i=0;i<k;i++)
        {
                cin>>letter[i]>>price[i];
        }
        cin>>m;

        for(j=0;j<m;j++)
        {
            gets(text);
            len=strlen(text);
            for(l=0;l<len;l++)
            {
                if(letter[i]==text[l])
                    cost+=price[i];

            }
            cout<<cost/100;

        }


    }
}
