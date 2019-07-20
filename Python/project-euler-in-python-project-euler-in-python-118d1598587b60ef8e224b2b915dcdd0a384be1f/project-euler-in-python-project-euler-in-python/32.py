"""We shall say that an n-digit number is pandigital if it makes use of all the digits 1 to n exactly once; for example, the 5-digit number, 15234, is 1 through 5 pandigital.

The product 7254 is unusual, as the identity, 39 × 186 = 7254, containing multiplicand, multiplier, and product is 1 through 9 pandigital.

Find the sum of all products whose multiplicand/multiplier/product identity can be written as a 1 through 9 pandigital.
HINT: Some products can be obtained in more than one way so be sure to only include it once in your sum."""

import operator
from functools import reduce

products = set()
d = set("123456789")

for a in range(1, 999999999):
    for b in range(1, 999999999):
        p = a*b
        s = "{}{}{}".format(a,b,p)
        
        if (len(s) == 9) and (set(s) == d):
            print(a, b, p)
            products |= {p} 
            print("sum = ", sum(products))
        elif len(s) > 9:
            #print(a)
            break

print(sum(products))
