# -*- coding: utf-8 -*-
"""
The series, 11 + 22 + 33 + ... + 1010 = 10405071317.

Find the last ten digits of the series, 11 + 22 + 33 + ... + 10001000.
"""

max=10**10
s=0
for i in xrange(1,1000):
	a=i**i
#	if a%max == 0:
#		break
	s=s+a

print s
