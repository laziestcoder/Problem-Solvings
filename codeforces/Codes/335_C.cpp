#include<bits/stdc++.h>
using namespace std;

int main ()
{
    freopen("335_cin.txt", "r", stdin);

    int n[100000]={0},p,temp,count=0,i,x;

    while(scanf("%d",&i)!=EOF)
    {
        count=0;
        for(x=0; x<i ; x++)
        {
            cin >> n[x];
        }
        for(x=0; x<i ; x++)
        {
            if( n[x+1] < n[x] )
            {
                temp[j]=n[x];
                n[x]=n[x+1];
                n[x+1]=temp;
                count++;
            }
        else
            continue;

        }
        cout << count << "\n";
    }

    return 0;

}

