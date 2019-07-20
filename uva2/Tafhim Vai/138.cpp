I encountered this problem at the very beginning of my ACM days and was totally noobish. I played with the ratios a lot that I got from the outputs using doubles but the result never quite reached the points. I googled and found precalculations and theorems in Algorithmist. I just wanted to do it on my own.

Method:
1. Analyze for the first input:
SUM[X-Y] means summation of all the numbers from X to Y.
It’s clear that
SUM[1-5] = SUM[1-8] – SUM[1-6]
So, 5*(5+1)/2 = 8*(8+1)/2 – 6*(6+1)/2
Now, think of 6 as Y, 5 as Y-1 and 8 as X.
So, we get
==> (Y-1)*(Y-1+1)/2 = X*(X+1)/2 – Y*(Y+1)/2
==> (Y-1)*Y/2 = X*(X+1)/2 – Y*(Y+1)/2
==> Y(Y-1) = X(X+1) – Y(Y+1)
==> Y(Y-1) + Y(Y+1) = X(X+1)
==> Y(Y-1+Y+1) = X(X+1)
==> Y(2Y) = X(X+1)
==> 2Y^2 = X(X+1)
==> 2Y^2 – X(X+1) = 0

So, we are simply looping from 1->INT_MAX so we have all the Ys. Just find if there is such an X that solves the equation. I coincidentally hit the theory that FLOORING of SQRT(2Y^2)is the only possible number.

#include <cstdio>
#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int output[20][2]={0,0};

int main()
{

    freopen("out.txt","w+",stdout);
    double rupper, rlower;
    long long i, count, upper, lower;

    for (i=1, count=0 ; i<=INT_MAX && count<=10 ; i++)
    {
        upper = 2 * i * i;
        lower = sqrt(upper);

        if ((upper - (lower*lower) - lower)==0)
        {
            cout << "{" << i << "," << lower << "}," << endl;
            count++;
        }
    }

    return 0;

}

The output is generated in a file, named out.txt. Just make a program and initialize the array with the output. And print it.
