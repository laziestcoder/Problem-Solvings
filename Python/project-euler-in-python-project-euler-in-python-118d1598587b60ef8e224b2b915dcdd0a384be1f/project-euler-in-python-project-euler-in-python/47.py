# -*- coding: utf-8 -*-

"""
The first two consecutive numbers to have two distinct prime factors are:

14 = 2 × 7
15 = 3 × 5

The first three consecutive numbers to have three distinct prime factors are:

644 = 2² × 7 × 23
645 = 3 × 5 × 43
646 = 2 × 17 × 19.

Find the first four consecutive integers to have four distinct primes factors. What is the first of these numbers?
"""

from sympy.ntheory.factor_ import primefactors
from itertools import count

c = 0

for i in count():
    if len(primefactors(i)) == 4: 
        c += 1
        if c == 4:
            print i-3
            break
    else: 
        c = 0


