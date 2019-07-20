def main(n):
    """return the largest palindrome of products of `n` digit numbers"""
    largest = 10 ** n - 1
    for a in range(largest, int(.9 * largest), -1):
        for b in range(a, int(.9 * a), -1):
            if is_palindrome(a * b):
                return a, b, a * b

def is_palindrome(number):
    number = str(number)
    halfway = len(number) // 2
    return number[:halfway] == number[:-halfway - 1:-1]



##def reverse(n):
##    reversed = 0
##    while n > 0:
##        reversed = 10 * reversed + n%10
##        n = n//10
##    return reversed
##
##def is_palindrome(n):
##    return n == reverse(n)
##
##def largest_palindrome(n):
##    largest = 0
##    a = 10**(n-1)
##    while a <= 10**n -1:
##        b = a
##        while b <= 10**n -1:
##            if is_palindrome(a*b) and (a*b > largest):
##                largest = a*b
##            b = b+1
##        a = a+1
##    return largest
    
    
