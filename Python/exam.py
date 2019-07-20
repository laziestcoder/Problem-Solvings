def f(y):
    x = y * 3
    return y + x
def larger_of_smallest(L1, L2):
    '''(list of int, list of int) -> int

    Return the larger of the smallest value in L1 and the smallest value in
    L2.

    Precondition: L1 and L2 are not empty.

    >>> larger_of_smallest([1, 4, 0], [3, 2])
    2
    >>> larger_of_smallest([4], [9, 6, 3])
    4
    '''

    return max(min(L1), min(L2))

def same_length(L1, L2):
    '''(list, list) -> bool

    Return True if and only if L1 and L2 contain the same number of elements.
    '''
##    if len(L1) == len(L2):
##        return True
##    else:
##        return False
    return len(L1) == len(L2)

def double_values(collection):
    for v in range(len(collection)):
        collection[v] = collection[v] * 2

    return collection[v]
