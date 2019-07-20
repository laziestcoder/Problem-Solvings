# -*- coding: utf-8 -*-
"""
A number chain is created by continuously adding the square of the digits in a number to form a new number until it has been seen before.

For example,

44 → 32 → 13 → 10 → 1 → 1
85 → 89 → 145 → 42 → 20 → 4 → 16 → 37 → 58 → 89

Therefore any chain that arrives at 1 or 89 will become stuck in an endless loop. What is most amazing is that EVERY starting number will eventually arrive at 1 or 89.

How many starting numbers below ten million will arrive at 89?
"""
def sos(n):
	s=0
	n=str(n)
	for i in n:
		s+=int(i)**2
	return s
		
def arrives89(n):
	while n!=89:
		if n==1:
			break
		n=sos(n)
	else:
		return True
	return False


s=0
for i in xrange(1,10000001):
	if arrives89(i):
		print i,
		s=s+1

print ""
print s
