# -*- coding: utf-8 -*-
"""
Problem 10
08 February 2002

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
"""
from math import sqrt

class prime:
	def __init__(self):
		self.primes=[2,3,5,7]

	def k3(self,a):
		if a in [3,6,9]:
			return True
		elif a<10:
			return False
		
		s=0
		
		for i in str(a):
			s=s+int(i)
		return self.k3(s)
	
	
	def calculate_to(self,a):
		i=self.primes[-1]+1
		while i<=a:
			if str(i)[-1] in ['0','2','4','6','8','5'] or self.k3(i):
				i=i+1
				continue
			l=sqrt(i)
			for j in self.primes[3:]:
				if j>l:
					print i,
					self.primes.append(i)
					break
				if i%j==0:
					break
			else:
				self.primes.append(i)
			i=i+2

	def get_prime(self,a):
		return self.primes[a-1]


p=prime()

a=2000000
p.calculate_to(a)
print sum( p.primes)
