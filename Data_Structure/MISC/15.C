/*
finding out fibonacci number upto 500th fibonacci number
*/

#include<stdio.h>
#include<string.h>
char result[1100], fib[501][1100];;

void big_add(char *h, char *f)
{
    int i, carry, lena, lenb, x, m, value;
    char temp[1100], a[1100], b[1100], swap;
    strcpy(a,h);
    strcpy(b,f);
    lena=strlen(a);
    lenb=strlen(b);
    if(lenb>lena)
    {
	m=lenb-lena;
	temp[0]='\0';
	for(i=1;i<=m;i++)
	    strcat(temp,"0");
	strcat(temp,a);
	strcpy(a,temp);
    }
    x=0;
    carry=0;
    for(i=lenb-1;i>=0;i--)
    {
	value=(a[i]-'0')+(b[i]-'0')+carry;
	result[x++]=(value%10)+'0';
	carry=value/10;
    }
    while(carry)
    {
	result[x++]=(carry%10)+'0';
	carry/=10;
    }
    result[x]='\0';
    m=x/2;
    for(i=0;i<m;i++)
    {
	swap=result[i];
	result[i]=result[(x-1)-i];
	result[(x-1)-i]=swap;
    }
}

int main()
{

    int i, n;
    strcpy(fib[0],"0");
    strcpy(fib[1],"1");
    strcpy(fib[2],"1");
    for(i=3;i<=500;i++)
    {
	big_add(fib[i-2],fib[i-1]);
	strcpy(fib[i],result);
    }
    printf("which fibonacci number : ");
    scanf("%d",&n);
    printf("fib[%d] : %s\n",n,fib[n]);
    return 0;
}
