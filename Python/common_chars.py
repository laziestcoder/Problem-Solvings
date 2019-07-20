def common_chars(s1, s2):
    '''(str, str) -> str

    Return a new string containing all characters from s1 that appear at least
    once in s2.  The characters in the result will appear in the same order as
    they appear in s1.

    >>> common_chars('abc', 'ad')
    'a'
    >>> common_chars('a', 'a')
    'a'
    >>> common_chars('abb', 'ab')
    'abb'
    >>> common_chars('abracadabra', 'ra')
    'araaara'
    '''

    res = ''
##    for ch in s1:
##        if ch in s2:
##            res = ch + res
##    if ch in s2:
##        for ch in s1:
##            res = res + ch
##    
##    for ch in s1:
##        for ch in s2:
##            res = res + ch
    for ch in s1:
        if ch in s2:
            res = res + ch
##    for ch in s2:
##        if ch in s1:
##            res = res + ch

    return res

def count_matches(s1, s2):
    '''(str, str) -> int

    return the number of positions in s1 that contain the
    same character at the corresponding position of s2.
    precondition: len[s1]==len[s2]

    >>> count_matches('ate', 'ape')
    2
    >>> count_matches('heed', 'hand')
    2
    '''

    num_matches = 0

    for i in range(len(s1)):
        if s1[i] == s2[i]:
            num_matches = num_matches + 1
    return num_matches
            
        
