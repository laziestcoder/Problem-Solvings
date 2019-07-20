#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char a[]="IJ TPGEPS BMJ";
    int l=strlen(a);
    for(int i=0;i<l ;i++)
        {   if(a[i]==' ')
                cout<<" ";
                else
                    printf("%c",a[i]-1);
        }
    cout<<endl;
    return 0;
}
