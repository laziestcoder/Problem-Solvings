def is_even(num):
    
    '''(int) -> bool

    Return whether num is even.
    
    >>> is_even(4)
    True
    >>> is_even(77)
    False
    '''
    return num % 2 == 0

##    if num % 2 == 0:
##        return True
##    else:
##        return False
##    

def dozens_eggs(eggs):
    '''(int) -> int

    '''
    return not (eggs % 12 != 0)
##    return eggs % 12 !=0


    
##    return not eggs % 12 == 0
##    return eggs % 12 ==0
##    if eggs % 12 == 0:
##        return False
##    else:
##        return True
