# -*- coding: utf-8 -*-
"""Problem 3
02 November 2001

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?"""

from prime import prime

target=600851475143

factors=[]

p=prime()

s=target/2
while p.primes[-1]<s:
	p.add()
	if target%p.primes[-1]==0:
		print p.primes[-1]

