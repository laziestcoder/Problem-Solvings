# -*- coding: utf-8 -*-
"""The number 3797 has an interesting property. Being prime itself, it is possible to continuously remove digits from left to right, and remain prime at each stage: 3797, 797, 97, and 7. Similarly we can work from right to left: 3797, 379, 37, and 3.

Find the sum of the only eleven primes that are both truncatable from left to right and right to left.

NOTE: 2, 3, 5, and 7 are not considered to be truncatable primes.
"""
from __future__ import print_function
from __future__ import division 

from itertools import count
from math import log10
from sympy import isprime

def ifilter(func, gen):
    for i in gen:
        if func(i):
            yield i

sum_ = count_ = 0
for n in ifilter(isprime, count(10)):    
    if all(isprime(n // (10**i)) for i in range(1, int(log10(n))+1)) and \
        all(isprime(n % (10**i)) for i in range(1, int(log10(n))+1)):
            sum_ += n
            count_ += 1
    if count_ == 11: break

print(sum_)
