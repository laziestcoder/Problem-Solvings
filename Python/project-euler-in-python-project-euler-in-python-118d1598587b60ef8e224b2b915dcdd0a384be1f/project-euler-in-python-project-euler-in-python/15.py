# -*- coding: utf-8 -*-
"""
Starting in the top left corner of a 2×2 grid, there are 6 routes (without backtracking) to the bottom right corner.

How many routes are there through a 20×20 grid?

"""

def factorial(n):
	if n==1:
		return 1
	return n*factorial(n-1)

c=(20,20)

print factorial(c[0]+c[1])/(factorial(c[0])*factorial(c[1]))
