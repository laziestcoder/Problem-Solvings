"""
Problem 35

The number, 197, is called a circular prime because all rotations of the digits: 197, 971, and 719, are themselves prime.

There are thirteen such primes below 100: 2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, and 97.

How many circular primes are there below one million?

"""

from __future__ import print_function
from __future__ import division 

from itertools import count, imap
from sympy import isprime
from math import log10

found = {}

def primes():
    for i in count(2):
        if isprime(i):
            yield(i)
        
def rotations(n):
    res = set()
    digit_count = int(log10(n))
    for i in range(1, digit_count+1):
        a, b = 10**i, 10**(digit_count-i+1)
        res.add(n%a * b + n//a)
    return res
        
c = 0
for i in primes():
    if i > 1000000:
        break
    if all(imap(isprime, rotations(i))):
        c += 1
        
print(c)