# -*- coding: utf-8 -*-
"""
Problem 9
25 January 2002

A Pythagorean triplet is a set of three natural numbers, a  b  c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc."""

from math import sqrt

found=False

for b in range(1,10000):
	for a in range(1,10000):
		c=sqrt(a**2+b**2)
		
		if a+b+c==1000 and c==int(c):
			found=True
			break
	if found:
		break
	


print a,b,c