def count_adjacent_repeats(s):
    '''(str) -> int

    Return the number of occurances of a character and
    an adjacent character being the same.

    >>> count_adjacent_repeats('abccdeffggh')
    3
    '''
    repeats = 0

    for i in range(len(s) - 1):
        if s[i] == s[i + 1]:
            repeats = repeats +1

    return repeats
