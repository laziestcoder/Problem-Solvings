def get_length(dna):
    ''' (str) -> int

    Return the length of the DNA sequence dna.

    >>> get_length('ATCGAT')
    6
    >>> get_length('ATCG')
    4
    '''
    return len(dna)


def is_longer(dna1, dna2):
    ''' (str, str) -> bool

    Return True if and only if DNA sequence dna1 is longer than DNA sequence
    dna2.

    >>> is_longer('ATCG', 'AT')
    True
    >>> is_longer('ATCG', 'ATCGGA')
    False
    '''
    return dna1 > dna2

    


def count_nucleotides(dna, nucleotide):
    ''' (str, str) -> int

    Return the number of occurrences of nucleotide in the DNA sequence dna.

    >>> count_nucleotides('ATCGGC', 'G')
    2
    >>> count_nucleotides('ATCTA', 'G')
    0
    '''
    return dna.count(nucleotide)
    



def contains_sequence(dna1, dna2):
    ''' (str, str) -> bool

    Return True if and only if DNA sequence dna2 occurs in the DNA sequence
    dna1.

    >>> contains_sequence('ATCGGC', 'GG')
    True
    >>> contains_sequence('ATCGGC', 'GT')
    False
    
    '''
    return dna2 in dna1

def is_valid_sequence(pdna):
    '''(str) -> bool

    Return True if and only if nucleotide characters ('A', 'T', 'C', 'G')
    occurs in DNA sequence pdna.
    
    >>> is_valid_sequence('ATCGATC')
    True
    >>> is_valid_sequence('ATBC')
    False
    >>> is_valid_sequence('T')
    True
    >>> is_valid_sequence('R')
    False
    '''
    non_nucleotide = 0
    for non in pdna:
        if non not in 'ATCG':
            non_nucleotide = non_nucleotide +1
            
    return non_nucleotide == 0

def insert_sequence(dna1, dna2, index):
    '''(str, str, int) -> str

    Return the DNA sequence obtained by inserting the second DNA sequence
    dna2 into the first DNA sequence dna1 at the given index.
    
    >>> insert_sequence('CCGG', 'AT', 2)
    CCATGG
    >>> insert_sequence('CCGG', 'AT', 9)
    'CCGGAT'
    >>> insert_sequence('CCGG', 'AT', 1)
    'CATCGG'
    >>> insert_sequence('CCGG', 'AT', 0)
    'ATCCGG'
    >>> insert_sequence('CCGG', 'AT', 4)
    'CCGGAT'
    '''
    if index is 0:
        return dna2 + dna1
    else:
        return dna1[:index] + dna2 + dna1[index:]

def get_complement(nucleotide):
    '''(str) -> str
    Return the nucleotide's complement for nucleotide.

    >>> get_complement('A')
    'T'
    >>> get_complement('T')
    'A'
    >>> get_complement('G')
    'C'
    >>> get_complement('C')
    'G'
    '''
    if nucleotide == 'A':
        return 'T'
    elif nucleotide == 'T':
        return 'A'
    elif nucleotide == 'G':
        return 'C'
    elif nucleotide == 'C':
        return 'G'

def get_complementary_sequence(dna):
    '''(str) -> str
    Return the DNA sequence that is complementary to the
    DNA sequence dna.

    >>> get_complementary_sequence('CCATGG')
    'GGTACC'
    >>> get_complementary_sequence('TAGCAT')
    'ATCGTA'
    >>> get_complementary_sequence('AGCTAC')
    'TCGATG'
    >>> get_complementary_sequence('AgTCAG')
    'TAGTC'
    >>> get_complementary_sequence('1234TC')
    'AG'
    >>> get_complementary_sequence('AT')
    'TA'
    '''
    complementary_sequence = ''
    for nucleotide in dna:
        if nucleotide in 'ATCG':
            complementary_sequence = complementary_sequence + get_complement(nucleotide)

    return complementary_sequence
    
        
    

