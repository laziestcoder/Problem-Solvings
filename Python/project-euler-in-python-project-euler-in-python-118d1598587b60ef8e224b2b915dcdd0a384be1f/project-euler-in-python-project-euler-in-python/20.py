# -*- coding: utf-8 -*-
"""Problem 20
21 June 2002

n! means n  (n  1)  ...  3  2  1

Find the sum of the digits in the number 100!"""

def fact(a):
	l=1
	for i in range(1,a+1):
		l=l*i
	return l
	
a=fact(100)

a=str(a)

c=[]
for i in a:
	c.append(int(i))


print sum(c)