# -*- coding: utf-8 -*-
"""
It can be seen that the number, 125874, and its double, 251748, contain exactly the same digits, but in a different order.

Find the smallest positive integer, x, such that 2x, 3x, 4x, 5x, and 6x, contain the same digits.

"""
from itertools import count

def t(a,b):
	b=str(b)
	for i in str(a):
		if i not in b:
			return False
	return True

for i in count(1):
	k=str(i)
	if t(i*2,i) and t(i*4,i) and t(i*5,i) and t(i*6,i):
		break
		
print i
