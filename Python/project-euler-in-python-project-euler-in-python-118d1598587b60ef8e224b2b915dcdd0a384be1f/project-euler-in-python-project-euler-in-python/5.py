# -*- coding: utf-8 -*-
"""Problem 5
30 November 2001

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?"""

i=20

while True:
	dividing=True
	print i,
	print "->",
	for j in range(1,21):
		if (i%j)!=0:
			print j
			dividing=False
			break
	i=i+20
	if dividing:
		break

print
print i