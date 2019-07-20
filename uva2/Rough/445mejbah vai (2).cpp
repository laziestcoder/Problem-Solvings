#include<bits/stdc++.h>
using namespace std;

int main ()
{
	char s[1000];
	int x;

	while(gets(s))
	{
		x = 0;
		for( int i = 0; s[i] != '\0'; i++ )
		{
			if( s[i] >= '0' && s[i] <= '9' ) x += s[i] - '0';
			else if( s[i] == '!' ) puts("");   /// empty string like "" --> double quotation . Every puts() makes a new line.
			else if( s[i] == 'b' )
			{
				while(x--) printf(" ");
				x = 0;
			}
			else
			{
				while(x--) printf("%c", s[i]);
				x = 0;
			}
		}
		puts(""); /// empty string like "" --> double quotation . Every puts() makes a new line.
	}
    return 0;
}
