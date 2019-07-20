#include <cstdio>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		double a,b;
		scanf("%lf %lf",&a,&b);
		a = 2*a;
		b = sqrt(2)*b;
		a= fabs(a-b);
		if(a<0.01)
		printf("Yes\n");
		else
		printf("No\n");
	}
	return 0;
}
