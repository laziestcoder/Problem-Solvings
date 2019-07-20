# -*- coding: utf-8 -*-
"""
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10001st prime number?
"""
def is_prime(a):
	if a<10 and (a in [2,3,5,7]):
		return True
	
	if (int(str(a)[-1]) in [0,2,4,6,8,5]):
		return False
	
	for i in xrange(3,a/2,2):
		if a%i==0:
			break
	else: 
		return True
	return False
	

i=2
j=1

while True:
	if j>10001:
		break
	if is_prime(i):
		print "%d. prime numbers is %d" % (j,i)
		j=j+1

	i=i+1