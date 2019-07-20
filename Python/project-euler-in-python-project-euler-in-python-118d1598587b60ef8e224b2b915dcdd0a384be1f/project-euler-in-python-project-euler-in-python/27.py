"""Euler published the remarkable quadratic formula:

n² + n + 41

It turns out that the formula will produce 40 primes for the consecutive values n = 0 to 39. However, when n = 40, 402 + 40 + 41 = 40(40 + 1) + 41 is divisible by 41, and certainly when n = 41, 41² + 41 + 41 is clearly divisible by 41.

Using computers, the incredible formula  n² − 79n + 1601 was discovered, which produces 80 primes for the consecutive values n = 0 to 79. The product of the coefficients, −79 and 1601, is −126479.

Considering quadratics of the form:

    n² + an + b, where |a| < 1000 and |b| < 1000

    where |n| is the modulus/absolute value of n
    e.g. |11| = 11 and |−4| = 4

Find the product of the coefficients, a and b, for the quadratic expression that produces the maximum number of primes for consecutive values of n, starting with n = 0."""

from lib import Prime
from math import sqrt
import itertools 

p = Prime()

def get_prime_count(t):
    for n in itertools.count():
        if not p.is_prime(n**2 + t[0]*n + t[1]):
            break
    return n

p_below_1000 = {i for i in range(1000) if p.is_prime(i)}

r = max((i for i in itertools.product(range(-1000, 1000), p_below_1000)), key=get_prime_count)

print(r, r[0]*r[1])
