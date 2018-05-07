/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

#include <stdio.h>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

#define long long long
const long M = 10000000007; // modulo

map<long, long> F;
vector<long> T[1234];

long f(long n, int Depth) {
	T[Depth].push_back(n);
	if (F.count(n)) return F[n];
	long k=n/2;
	if (n%2==0) { // n=2*k
		return F[n] = (f(k, Depth+1)*f(k, Depth+1) + f(k-1, Depth+1)*f(k-1, Depth+1)) % M;
	} else { // n=2*k+1
		return F[n] = (f(k, Depth+1)*f(k+1, Depth+1) + f(k-1, Depth+1)*f(k, Depth+1)) % M;
	}
}

int main(){
	long n;
	F[0]=0 ;F[1]=1;
	int t,cas;
	cin>>t;
	for(cas=1; cas<=t; cas++)
    {
	if (cin >> n) {
             printf("Case %d: %ld is the last digit.\n",cas,f(n, 0));
			//cout << f(n-1, 0) << endl;
	}
    }
	/****
	for (int i=0; i<1234; i++) if (T[i].size()) {
		sort(T[i].begin(), T[i].end());
		T[i].erase(unique(T[i].begin(), T[i].end()), T[i].end());
		//printf("Depth[%d] : ", i);
		//for (int j=0; j<T[i].size(); j++) printf("%lld ", T[i][j]);
		//printf("\n");
	}
	***/
	return 0;
}
