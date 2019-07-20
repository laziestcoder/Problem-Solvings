#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>

#define debug printf("\n<<Came here<<\n")
#define i64 long long
#define mem(x,y) memset(x,y,sizeof(x))
#define mx 102
using namespace std;
int main(){
    int n, i, temp, mi, day, price[mx], sum;
    scanf("%d", &n);
        sum=0;
        for(i=0; i<n; i++){
            scanf("%d %d", &day, &price[i]);
            if(i==0) mi=i;
            else if(price[i]<=price[i-1]) mi=i;
            temp=day*price[mi];
            sum+=temp;
        }

    printf("%d\n", sum);
return 0;
}
