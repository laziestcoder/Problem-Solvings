def sum_of_fibonacci(n):
    f1 = 0
    f2 = 1
    sum = 1
    for i in range(n - 1):
        f = f1 + f2
        f1 = f2
        f2 = f
        
        sum = sum + f
    return sum

def fibonacci_term(t):
    f1 = 0
    f2 = 1
    if t == 1:
        f = 1
    else:
        for i in range(t-1):
            f = f1 + f2
            f1 = f2
            f2 = f

    return f
import math

def sum_fibonacci_even(limit):
##    sum_even = 0
##    for n in range(-1, 10**8, 3):
##        if ((1/math.sqrt(5))*(((1+ math.sqrt(5))/2)**(n+2) - ((1- math.sqrt(5))/2)**(n+2))) < limit:
##            sum_even = sum_even + ((1/math.sqrt(5))*(((1+ math.sqrt(5))/2)**(n+2) - ((1- math.sqrt(5))/2)**(n+2)))
##        else:
##            break
##    return sum_even
##    
    sum_even = 0
    for n in range(2, 1000000000000):
        if (fibonacci_term(n) < limit) and (fibonacci_term(n)%2 == 0):
            sum_even = sum_even + fibonacci_term(n)
        elif fibonacci_term(n) >= limit:
            break
        
            
    
    return sum_even
