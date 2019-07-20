#include<bits/stdc++.h>
using namespace std;

#define dd(x) cout<<"debug "<<x<<endl
#define M 100
bool marked[M];
int main ()
{
  freopen("out.txt","w",stdout);
    int n,a,b,i,c,j,k,x;
    int du[85][1000],nu[85][1000],dig[10]= {0};
    for(j=2; j<=79; j++)
    {
        k=0;
        nu[j][k]=0;
        du[j][k]=0;
        for(i=1234; i<98765; i++)
        {
            int p;
            for(p=0; p<=9; p++)
                dig[p]=0;
            a=i*j;
            int a1=a;
            int i1=i;
            x=log10(a)+1;
            if(x== 5)
            {
                while(a1)
                {
                    dig[a1%10]++;
                    a1/=10;
                }
                int h=1;
                while(i1)
                {
                    x=log10(i)+1;
                    if( x == 4 && h>0)
                    {
                        dig[0]++;
                        h=0;
                    }
                    dig[i1%10]++;
                    i1/=10;
                }
                int f=0;
                for(int p=0; p<=9; p++)
                {
                    if(dig[p]>1)
                    {
                        f=0;
                        break;
                    }
                    else
                        f=1;
                }
                if(f)
                {
                    nu[j][k]=a;
                    du[j][k]=i;
                    k++;
                }
            }
        }
            if(!nu[j][0])
            {
                marked[j]=false;
            }
            else
                marked[j]=true;
    }
    k=0;
    while(1)
    {

        cin>>n;
        if(n==0)
            break;
            if(k==1)
                cout<<endl;

        if(!marked[n])
            cout<<"There are no solutions for "<<n<<"."<<endl;
        else
        {
            x=0;
            for(i=0; nu[n][i]>0 ; i++)
            {
                x=log10(du[n][i])+1;
                if(x == 5)
                    printf("%d / %d = %d\n",nu[n][i],du[n][i],n);
                else if(x == 4)
                    printf("%d / 0%d = %d\n",nu[n][i],du[n][i],n);
            }
        }
        k=1;
    }
    return 0;
}
