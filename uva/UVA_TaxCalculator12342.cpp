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
    long long x,taka;
    double tax;
    int n,i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        if(x<=180000)
            tax=0;
        else if(x>180000 && x<=480000)
            tax=0+(x-180000)*0.1;
        else if(x>480000 && x<=880000)
            tax=300000*0.1+(x-180000-300000)*0.15;
        else if(x>880000 && x<=1180000)
            tax=300000*0.1+(x-180000-300000)*0.15+(x-180000-300000-400000)*0.2;
        else
            tax=300000*0.1+(x-180000-300000)*0.15+(x-180000-300000-400000)*0.2+(x-180000-300000-400000-300000)*0.25;
        tax=(ceil)tax;
        if(tax>0 && tax<=2000)
            taka=2000;
        else
            taka=tax;
        cout<<"Case "<<i<<": "<<taka<<endl;
    }
    return 0;
}
