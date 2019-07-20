#include <bits/stdc++.h>
using namespace std;

int main () {
     int N, i;
     char name[11];
     scanf("%d",&N);
     for(i=0;i<N;i++) {
         scanf("%s", name);
         if('a'<= name[0] && name[0]<='z')
         name[0]=name[0]-'a'+'A';
         printf( "Welcome %s\n", name);
     }
     return 0;
}
