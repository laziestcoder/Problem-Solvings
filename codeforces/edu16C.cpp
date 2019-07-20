#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i;
    scanf("%d",&n);
    for(i=0; i< n*n ;i++)
    {
        printf("%d",i+1);
        if(i/n == 0)
            cout<<endl;
        else
            printf(" ");
    }
    cout<<endl;
    return 0;
}
