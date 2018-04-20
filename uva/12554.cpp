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

    int n,i,j,z=0,x=0;
    char s[105][100], h[][10]= {"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin>> s[i];
    }
    z=0;x=0;
    for(i=0,j=0 ;  ; i++,j++)
    {
            cout << s[i] <<": " << h[j] <<endl;
            if(j==15)
                {
                    x=1;
                    if(z==0)
                        j=-1;
                    if(z==1 && x==1 && j==15)
                        break;
                }
            if(i==n-1)
                {
                    z=1;
                    if(x==0 || j<15)
                      i=-1;
                    if(z==1 && x==1 && j==15)
                        break;
                }
            if(z==1 && x==1 && j==15)
                break;
    }
    return 0;

}
