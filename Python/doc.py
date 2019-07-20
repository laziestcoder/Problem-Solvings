##def get_complement(nucleotide):
##    '''(str) -> str
##    Return the nucleotide's complement for nucleotide.
##
##    >>> get_complement('A')
##    'T'
##    >>> get_complement('T')
##    'A'
##    >>> get_complement('G')
##    'C'
##    >>> get_complement('C')
##    'G'
##    '''
##    if nucleotide == 'A':
##        return 'T'
##    elif nucleotide == 'T':
##        return 'A'
##    elif nucleotide == 'G':
##        return 'C'
##    elif nucleotide == 'C':
##        return 'G'
##
##def get_complementary_sequence(dna):
##    '''(str) -> str
##    Return the DNA sequence that is complementary to the
##    DNA sequence dna.
##
##    >>> get_complementary_sequence('CCATGG')
##    'GGTACC'
##    >>> get_complementary_sequence('TAGCAT')
##    'ATCGTA'
##    >>> get_complementary_sequence('AGCTAC')
##    'TCGATG'
##    >>> get_complementary_sequence('AgTCAG')
##    'TAGTC'
##    >>> get_complementary_sequence('1234TC')
##    'AG'
##    >>> get_complementary_sequence('AT')
##    'TA'
##    '''
##    complementary_sequence = ''
##    for nucleotide in dna:
##        if nucleotide in 'ATCG':
##            complementary_sequence = complementary_sequence + get_complement(nucleotide)
##
##    return complementary_sequence
##
##def mystery(s):
##    i = 0
##    result = ''
##
##    while not s[i].isdigit():
##        result = result + s[i]
##        i = i + 1
##
##    return result

##def example(L):
##    ''' (list) -> list
##    '''
##    i = 0
##    result = []
##    while i < len(L):
##        result.append(L[i])
##        i = i + 3
##    return result
##  
##example(['45', '89', '99', '34', '90'])

def compress_list(L):
    ''' (list of str) -> list of str

    Return a new list with adjacent pairs of string elements from L
    concatenated together, starting with indices 0 and 1, 2 and 3,
    and so on.

    Precondition: len(L) >= 2 and len(L) % 2 == 0

    >>> compress_list(['a', 'b', 'c', 'd'])
    ['ab', 'cd']
    '''
    compressed_list = []
    i = 0

    while i < len(L):
        compressed_list.append(L[i] + L[i + 1])
        i = i + 2
##        i = i * 2
    return compressed_list

def cap_song_repetition(playlist, song):
    '''(list of str, str) -> NoneType

    Make sure there are no more than 3 occurrences of song in playlist.
    '''

def secret(s):
    i = 0
    result = ''

    while s[i].isdigit():
        result = result + s[i]
        i = i + 1

    return result

def make_str_from_row(board, row_index):
    ''' (list of list of str, int) -> str

    Return the characters from the row of the board with index row_index
    as a single string.

    >>> make_str_from_row([['A', 'N', 'T', 'T'], ['X', 'S', 'O', 'B']], 0)
    'ANTT'
    >>> make_str_from_row([['A', 'N', 'T', 'T'], ['X', 'S', 'O', 'B'],['R', 'A', 'F', 'I']], 2)
    'RAFI'
    >>> make_str_from_row([['A', 'N', 'T', 'T'], ['X', 'S', 'O', 'B']], 1)
    'XSOB'
    '''
    
    for row_index in range(len(board) +1):
        return ''.join(board[row_index])

def make_str_from_column(board, column_index):
    ''' (list of list of str, int) -> str

    Return the characters from the column of the board with index column_index
    as a single string.

    >>> make_str_from_column([['A', 'N', 'T', 'T'], ['X', 'S', 'O', 'B']], 1)
    'NS'
    '''
   
        
    
