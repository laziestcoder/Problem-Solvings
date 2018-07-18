#include<bits/stdc++.h>
using namespace std;
int main(){

    int ar[3];
    scanf("%d %d %d",&ar[0],&ar[1],&ar[2]);
    sort(ar,ar+3);
    reverse(ar,ar+3);
    printf("%d %d %d\n",ar[0],ar[1],ar[2]);
    return 0;
}
