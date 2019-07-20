#include<stdio.h>
#include<stdlib.h>

int main ()
{
		int i;
		char buffer [1000];

		printf ("Enter a number: ");
		fgets (buffer, 1000, stdin);

		i = atoi (buffer);
		printf ("The value entered is %d.",i);

		return 0;
}
