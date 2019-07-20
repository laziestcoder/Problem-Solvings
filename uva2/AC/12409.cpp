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
   /*** freopen("in.txt","r",stdin);  ***/
    int t,cas=0,c,r,i,j;
    cin>>t;
    while(t--)
    {
        scanf("%d%d",&r,&c);
        int g,co=0,s=r+j;
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                scanf("%d",&g);
              /*** if((s-(i+j))%2 == 1)
                {
                 if(g&&co)  //it does not works good :3
                    co=0;
                 else
                    co=1;
                }
                 ***/
                 if ((r - i + c - j) % 2 == 1)
                 {
                     co=co^g;   /*** here ^ is denotes bitwise exclusive or (XOR). Which means
                                              if co==1 && g==1 , co=0;
                                        again if co==0 && g==0, co=0
                                        again if co==1 && g==0 , co =1
                                        again if co==0 && g==1, co=1 .
                                        Note that if you use these statement as a logical statement it will give you
                                        verdict as Wrong Answer. So use ^ (bitwise XOR) instead of logical statement ***/
                 }
            }
        }

        printf("Case %d: ",++cas);
        if(co > 0 )
            cout<<"win\n";
        else
            cout<<"lose\n";

    }
    return 0;
}
