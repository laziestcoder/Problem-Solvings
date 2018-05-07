"""
/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/
"""

n,a=raw_input().split()
n=int(n)
a=int(a)
s=a;
sum=0
for i in range(1,n+1):
    sum+=i*s
    s*=a
print (sum)