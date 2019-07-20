import math
def is_prime(n):
    for i in range(2, int(math.sqrt(n))+1):
        if n%i == 0:
            return False
    return True

def search_prime(num):
    count = 1
    nth_prime = 2
    test_num = 3
    while count < num:
        if is_prime(test_num):
            count = count + 1
            nth_prime = test_num
        test_num = test_num + 2
    return nth_prime


##def nth_prime(nth):
##    count = 0
##    cur_prime = 2
##    test_num = 3
##    while count <= nth:
##        for i in range(2, int(math.sqrt(test_num))+1):
##            if test_num % i == 0:
##                continue
##            else:
##                count = count +1
##                cur_prime = test_num
##        test_num = test_num + 2
##    return cur_prime

## this program needs to be corrected.
