/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/
#include "bits/stdc++.h"
using namespace std;
int a[1000];
int main(int argc, char const *argv[])
{
	string s;
	cin >> s;
	int n = s.size();
	s = "&" + s;
	if(n < 26) {
		cout << -1 << endl;
		exit (0);
	}
	for(int i = 1; i <= n; i++) {
		if(s[i] != '?') a[s[i] - 'A'] += 1;
		if(i > 26) {
			if(s[i - 26] != '?') a[s[i - 26] - 'A'] -= 1;
		}
		if(i >= 26) {
			bool yes = true;
			for(int j = 0; j < 26; j++) {
				if(a[j] > 1) {
					yes = false;
					break;
				}
			}
			if(yes) {
				for(int j = i-26+1; j <= i; j++) {
					if(s[j] != '?') continue;
					for(int k = 0; k < 26; k++) {
						if(a[k] == 0) {
							s[j] = k + 'A';
							a[k] = 1;
							break;
						}
					}
				}
				for(int j = 1; j <= n; j++) {
					if(s[j] == '?') s[j] = 'A';
				}
				cout << s.substr(1, n) << endl;
				exit(0);
			}
		}
	}
	cout << -1 << endl;
	return 0;
}
