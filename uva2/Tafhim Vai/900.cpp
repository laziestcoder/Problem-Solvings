A simple sequence related problem. The sequence that it maintains is Fibonacci, with the fib[0] as 1. Other things are just as they always were. Here’s the code:


#include <iostream>
using namespace std;

long long int fib[52]={1};
int main() {
    int q, i;

    fib[0]=1;
    fib[1]=1;
    for (i=2 ; i<53 ; i++) {
        fib[i]=fib[i-1]+fib[i-2];
    }
    while (scanf("%d",&q)==1 && q) {
        printf("%lld\n",fib[q]);
    }
    return 0;
}
