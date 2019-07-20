Method:

1. Generate all primes till sqrt(99999999999999) and got on
table.
2. For any number (if negative make it positive) used these till
the complete division is done or the table is fully used.
3. If the number is completely divided (becomes 1) just print the
last prime that was a divisor (provided there were 2 divisors at
least).
4. If not fully divided, then you have a potential divisor in your
hand. If there was at least one prime divisor from the collection
print the remaining part that is still in your hand.
5. For any other case print -1.

Sample Input:

32
-32
-1
1
2
3
25412689632451
23554125478568
-96325415789658
32145222225856
32547854125223
99999999999999
11111111111111
99999999999998
99999999999997
-16
-17
-19
-24
0

Sample Output:

-1
-1
-1
-1
-1
-1
1164409
363444721
3912804281
3525017
21441599
909091
909091
7142857142857
119189511323
-1
-1
-1
3

#include <cstdio>
#include <iostream>
#include <cmath>
#define MAX 10001000
using namespace std;
bool ver[MAX]={false};
long long primes[1000000];
int sieve() {
    int i, j, k;
    k=0;
    for (i=2 ; i<=MAX ; i++) {
        if (ver[i]==false) {
            primes[k++]=(long long)i;
            for (j=2 ; i*j<=MAX ; j++) {
                ver[i*j]=true;
            }
        }
    }
    primes[0]=2;
    return k;
}

int main() {

    bool isNegative;
    int i, j, divcount, plim=sieve();;
    long long num, lastdiv;
    while (cin >> num && num) {
        isNegative=false;
        if (num<0) {
            num*=(-1);
            isNegative=true;
        }
        for (i=0, divcount=0, lastdiv=-1 ; i<plim && num>1 && primes[i]<=num ; i++) {
            if (num%primes[i]==0) {
                divcount++;
                while (num>1 && num%primes[i]==0) {
                    num/=primes[i];
                }
                lastdiv = primes[i];
            }
            if (num==1) {
                break;
            }
        }

        if (num==1) {
            if (divcount>1) cout << lastdiv << endl;
            else cout << -1 << endl;
        } else {
            if (divcount>0) cout << num << endl;
            else cout << -1 << endl;
        }
    }

    return 0;

}
