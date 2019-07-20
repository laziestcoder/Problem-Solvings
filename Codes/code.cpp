#include<bits/stdc++.h>
using namespace std;

#define LL __int128
#define eps 1e-11

int main() {
    
	LL a,b,c;
    cin >> a >> b >> c;
	
	
	
	int flag = 0;
	
	LL now = 1;
	//double tot = 0;
	
	if (a == 1) {
		flag = 1;
		printf("1");
	}
	
	while(true) {
		if (now * c > b) {
			break;
		}
		now *= c;
		//tot += lgc;
		if (now > b) break;
		if (now < a) continue;
		if (flag) printf(" ");
		cout << now;
		flag = 1;
	}
	
	if(flag == 0) printf("-1\n");
	else printf("\n");
	
    
    return 0;
}