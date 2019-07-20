#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
char str[10];
int n,i,num,pw=0,sum=0;
printf("Enter a number in hexadecimal : ");
scanf("%s",str);
i=strlen (str);

for(;i>0;i--)
{
n=str[i-1];
if(n=='A'){
num=(10*pow(16,pw));}
if(n=='B'){
num=(11*pow(16,pw));}
if(n=='C'){
num=(12*pow(16,pw));}
if(n=='D'){
num=(13*pow(16,pw));}
if(n=='E'){
num=(14*pow(16,pw));}
if(n=='F'){
num=(15*pow(16,pw));}
if(n=='1'){
num=1*pow(16,pw);}
if(n=='2'){
num=2*pow(16,pw);}
if(n=='3'){
num=3*pow(16,pw);}
if(n=='4'){
num=4*pow(16,pw);}
if(n=='5'){
num=5*pow(16,pw);}
if(n=='6'){
num=6*pow(16,pw);}
if(n=='7'){
num=7*pow(16,pw);}
if(n=='8'){
num=8*pow(16,pw);}
if(n=='9'){
num=9*pow(16,pw);}
pw++;
sum=sum+num;
}
printf("\n\nYour number in decimal is: %d ",sum);
getch();
return 0;
}
