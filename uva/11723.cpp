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
int main ()
{
    int r,n,c=0;
    while(scanf("%d%d",&r,&n)!=EOF)
    {
        if(r==0 && n==0)
            break;
        c++;
        printf("Case %d: ",c);
        if((r-1)/n>26)
        cout<<"impossible\n";
        else
        cout<< (r-1)/n<<endl;
    }
    return 0;
}
