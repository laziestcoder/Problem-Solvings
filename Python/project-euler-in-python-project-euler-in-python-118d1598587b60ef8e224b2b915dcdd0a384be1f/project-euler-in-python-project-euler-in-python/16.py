# -*- coding: utf-8 -*-
"""Problem 16
03 May 2002

2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2^1000?"""
from math import pow
from decimal import Decimal

a=2**1000
print a


a=str(a)

c=[]
for i in a:
	c.append(int(i))


print sum(c)