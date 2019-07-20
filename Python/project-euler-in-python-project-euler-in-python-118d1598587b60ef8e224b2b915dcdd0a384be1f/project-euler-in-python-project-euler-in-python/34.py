# -*- coding: utf-8 -*-
"""145 is a curious number, as 1! + 4! + 5! = 1 + 24 + 120 = 145.

Find the sum of all numbers which are equal to the sum of the factorial of their digits.

Note: as 1! = 1 and 2! = 2 are not sums they are not included.
"""
from lib import factorials

f=factorials()
def sfd(n):
	s=0
	for i in str(n):
		s+=f.get(int(i))
		if s>n:
			return False
	if n==s:
		return True
	return False

d=[]
for i in range(1,100000):
	if sfd(i):
		print i
		d.append(i)
		print "sum=",sum(d)
