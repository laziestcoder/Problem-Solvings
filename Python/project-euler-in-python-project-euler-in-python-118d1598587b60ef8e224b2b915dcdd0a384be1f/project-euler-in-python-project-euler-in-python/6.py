# -*- coding: utf-8 -*-
"""Problem 6
14 December 2001

The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025  385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum."""


s1=0 #sum of the squares
s2=0 #square of the sum
for i in range(101):
	s1=s1+i**2
	s2=s2+i
	
s2=s2**2

print abs(s2-s1)