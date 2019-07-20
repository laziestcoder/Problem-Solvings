#include <bits/stdc++.h>
using namespace std;
int arry[]={1,2,3,4,5,6,7,8,9,10};
void bar(int num, int lim){
    int i = 0;
    int v = 0;
    int l=sizeof(arry)/sizeof(arry[0]);
    while ((i < l) && (arry[i] + num < lim)){
        if (arry[i] <= arry[v]){
            v = i; /* Statement A */
            cout<<"A "<< v <<endl;
        }
        i++; /* Statement B */
        cout<<"B "<< i <<endl;
    }
    //cout<<v<<endl;
}
int main ()

{
    while(1)
    {int n,m;
    cin>>n>>m;
     bar(n,m);
    }
   return 0;
}
