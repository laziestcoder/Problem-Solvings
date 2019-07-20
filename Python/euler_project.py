import math
def sum_multiple(a, b, limit):
    sum_1 = 0
    sum_2 = 0
    sum_3 = 0
    for k in range(1, limit):
        if a*k < limit:
            sum_1 = sum_1 + a*k
        else:
            break
    for k in range(1, limit):
        if b*k < limit:
            sum_2 = sum_2 + b*k
        else:
            break
    for k in range(1, limit):
        if a*b*k < limit:
            sum_3 = sum_3 + a*b*k
        else:
            break
    return sum_1 + sum_2 - sum_3

def pythagorean_triplet(sum):
    m = 1
    n = 1
    for n in range(1, 32):
        for m in range(n + 1, 32):
            a = m**2 - n**2
            b = 2*m*n
            c = m**2 + n**2
            if (a + b + c) == sum:
                return a*b*c
                print(a)
                print(b)
                print(c)

# indentify a prime number
def is_prime(n):
    
##    if n < 2: 
##         return False;
##    if n % 2 == 0:
##         # return False
##         return n == 2
##    k = 3
##    while k*k <= n:
##         if n % k == 0:
##             return False
##         k += 2
##    return True
    
    if n < 2:
        return True
    if n%2 == 0:
        return n == 2
    for i in range(3, int(math.sqrt(n))+1, 2):
        if n%i == 0:
            return False
    return True
        
# add it with 2 if it is below 2 million
def sum_primes_below(limit):
    sum_primes = 2
    for num in range(3, limit, 2):
        if is_prime(num):
            sum_primes = sum_primes + num
    return sum_primes


# <span id="d9tf68o5658_5" class="d9tf68o5658">Python</span> version = 2.7.2
# Platform = win32
 
##def primes(n):
##    """Prime <span id="d9tf68o5658_3" class="d9tf68o5658">number generator</span> up to n - (generates a list)"""
##    ## {{{ http://code.activestate.com/recipes/366178/ (r5)
##    if n == 2: return [2]
##    elif n < 2: return []
##    s = range(3, n + 1, 2)
##    mroot = n ** 0.5
##    half = (n + 1) / 2 - 1
##    i = 0
##    m = 3
##    while m <= mroot:
##        if s[i]:
##            j = (m * m - 3) / 2
##            s[j] = 0
##            while j < half:
##                s[j] = 0
##                j += m
##        i = i + 1
##        m = 2 * i + 3
##    return [2]+[x for x in s if x]
## 
##   ## end of http://code.activestate.com/recipes/366178/ }}}
## 
##
##    print(sum(primes(2000000)))
 

   
    
