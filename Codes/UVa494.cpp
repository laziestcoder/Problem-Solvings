#include<bits/stdc++.h>
#include<cstdio>
#include<string>

using namespace std;

int main()
{
	char A[10001];
	int t,i,count,s;
	while(gets(A)){
		count=0;
		s=strlen(A);
		for(i=0;i<s;++i){
			if(isalpha(A[i]) && !isalpha(A[i+1])) ++count;
		}
		cout << count << endl;
	}
}
