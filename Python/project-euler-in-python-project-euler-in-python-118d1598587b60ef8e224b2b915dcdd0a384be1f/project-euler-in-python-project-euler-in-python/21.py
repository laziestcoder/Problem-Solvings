# -*- coding: utf-8 -*-
"""
Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and each of a and b are called amicable numbers.

For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.

Evaluate the sum of all the amicable numbers under 10000.
"""
from lib import factors

f=factors()

MAX=10000

results={}

for i in range(2,MAX+1):
	s=sum(f.get_divisors(i)[0:-1])
	results[i]=s


amicables=[]

for i in results.keys():
	if results[i] in results.values() and 2<=results[i]<=MAX and results[results[i]]==i and not results[i] in amicables and not results[i]==results[results[i]]:
		amicables.append(results[i])
		amicables.append(results[results[i]])
	
print "amicables=",amicables
print "sum=",sum(amicables)
