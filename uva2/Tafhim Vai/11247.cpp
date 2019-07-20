Simplification of the theorem solves the problem with a few glitches to overlook.
First of all v-(vx)/100 v " v < 100q / (100-x)Don't ignore the < sign it will drag you by the nose for a while.So you generate a v from this. But realize if 100q is completely dividable by (100-x) then v must be smaller. So check if that happens. If it does, just decrease v by 1.And some other gotchas are x being m being 1 because you use m-1 and x being 0 or 100. "





#include <cstdio>

#include <iostream>

#include <cmath>

#include <cstdlib>

#include <iostream>

using namespace std;



int main()

{

long long v, p, q;

long long m, x, orig_m;

while (cin >> m >> x)

{

if (!m && !x)

return 0;



if (m==1 || x==0 || x==100)

{

printf("Not found\n");

continue;

}



v = (100*(m-1)) / (100-x);



if (( (100*(m-1)) % (100-x) ) == 0)

v--;



if (v<m)

{

printf("Not found\n");



} else

{

cout << v << endl;

}

}

return 0;

}
