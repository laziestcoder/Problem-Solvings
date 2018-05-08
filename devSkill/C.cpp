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
long long int fib[45];

void fb(long long int i)
{
    fib[1]=1;
    fib[2]=3;
    fib[3]=4;
    for(int j=4; j<=i;j++)
     fib[j]=fib[j-2]+fib[j-1];
}

int main ()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
            fib[i]=0;
        fb(n);
        cout<<fib[n]<<endl;
    }
    return 0;

}
