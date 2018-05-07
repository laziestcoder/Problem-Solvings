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
   // freopen("input.txt","r",stdin);

    double h,u,d,f,x,y,z;
    while(scanf("%lf%lf%lf%lf",&h,&u,&d,&f)!=EOF)
    {
        //cout<<h<<u<<d<<f<<endl;
        if(h==0)
            return 0;
        int i=1,p=0;
        f=u*(f/100);
        //cout<<f<<endl;
        z=0;
        y=u;
        x=y+z;

        //cout<<endl<<"Case Start"<<endl<<endl;
        while(1)
        {  // cout<<i<<"\t"<<z<<"\t"<<y<<"\t"<<x<<"\t";
            z=x-d;
           // cout<<z<<endl;
            if(x>h)
                {
                    printf("success on day %d\n",i);
                    break;
                }

            else if(z<0)
                {
                    printf("failure on day %d\n",i);
                    break;
                }
            if(y>0)
            {
                y=y-f;
            }
            x=y+z;
            i++;
        }
    }
}


/**
6  3  1  10
10  2  1  50
50  5  3  14
50  6  4  1
50  6  3  1
1  1  1  1
0  0  0  0

**/
