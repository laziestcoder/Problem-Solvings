#include<bits/stdc++.h>
using namespace std;

int main() {

	int testCase, caseNo = 0;
	cin >> testCase;

	while(true){ 
		if(testCase <= caseNo) break;
		
		double d, v, u;
		cin >> d >> v >> u;
		
		if( v >= u || u == 0 || v == 0 ){
			printf("Case %d: can\'t determine\n", ++caseNo);
			continue;
		}

		double t1 = d/u;
		double t2 = d/sqrt(u*u-v*v);

		printf("Case %d: %.3lf\n", ++caseNo, fabs(t1-t2));
	}

	return 0;
}
