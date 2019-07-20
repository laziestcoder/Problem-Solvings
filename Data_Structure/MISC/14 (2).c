/*
calculating any factorial upto 100!
*/

#include<stdio.h>
#include<string.h>

char fact[110][1000];

void reverse(char *str)
{
    int len=strlen(str), r, s;
    char temp;
    r=0;
    s=len-1;
    while(s>r)
    {
        temp=str[s];
        str[s]=str[r];
        str[r]=temp;
        r++;
        s--;
    }
}

int main()
{
	char str1[1000]="1", str2[1000];
	int i, j, carry, len, temp, x, m, top=0;
	for(i=1;i<=100;i++)
	{
		carry=0;
		m=0;
		len=strlen(str1);
		for(j=0;j<len;j++)
		{
			temp=str1[j]-'0';
			temp=temp*i+carry;
			str2[m++]=(temp%10)+'0';
			carry=temp/10;
		}
		while(carry)
		{
			str2[m++]=(carry%10)+'0';
			carry/=10;
		}
		str2[m]='\0';
        strcpy(str1,str2);
		reverse(str2);
		strcpy(fact[++top],str2);
	}
    printf("input number : ");
    scanf("%d",&x);
    printf("%d! : %s\n",x,fact[x]);
	return 0;
}
