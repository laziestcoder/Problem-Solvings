#include<bits/stdc++.h>
using namespace std;
long long int n,a,b,c,x=0,y=0,cn;

long long int glass(long long int r)
{
    if(((r%b)+((r/b)*c))>=b)
    {
        y=y+(r/b);
        glass((r%b)+((r/b)*c));

    }
    /*if((r%b)+((r/b)*c)>=a)
    {
        y=y+(r/b);
        glass((r%b)+((r/b)*c));
    }*/
    else if((r/b)<(r/a))
    {
        y=y+(r/a);
        return y;
    }
    else
    {
        y=y+(r/b);
        return y;
    }
    if((r%b)+((r/b)*c)>=a)
    {
        y=y+(r/b);
        glass((r%b)+((r/b)*c));
    }

}
int main ()
{

	while(1){
    y=0;
    cin >> n >> a >> b >> c;
    cout<<glass(n)<<endl;
    if(n==0)
        return 0;
}
}
