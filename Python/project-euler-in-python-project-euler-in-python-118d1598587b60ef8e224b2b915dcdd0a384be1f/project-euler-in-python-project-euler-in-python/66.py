from __future__ import print_function

from math import sqrt
import itertools

m = 0

for D in range(2, 1001):
	if(sqrt(D) % 1 == 0): continue
	x, i = 0, 0
	for i in itertools.count(1):
		x = sqrt(1 + D * i**2)
		if(x % 1 == 0):
			break
	m = max(m, x)
	if(m == x): print(D, "(%d^2 - %d*%d^2 = 1)" % (x, D, i))
