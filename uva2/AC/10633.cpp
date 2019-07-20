/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

/*******

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n,i,c;
    while(1)
    {
        cin>>n;
        c=n/10;
        if(n==0)
            break;
            i=n+(n/10);
        for(i=n+(n/10); i-n<10; i++)
            if( i-(i/10) == n )
              cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}


  ********/





#include<bits/stdc++.h>
using namespace std;
int main ()
{
    unsigned long long int n,i,c;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        i=(n*10)/9;
        c=i-1;
        if(n%9==0)
            printf("%llu %llu\n",c,i);
        else
            printf("%llu\n",i);
    }
    return 0;
}
