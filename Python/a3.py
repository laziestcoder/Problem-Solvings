'''A board is a list of list of str. For example, the board
    ANTT
    XSOB
is represented as the list
    [['A', 'N', 'T', 'T'], ['X', 'S', 'O', 'B']]

A word list is a list of str. For example, the list of words
    ANT
    BOX
    SOB
    TO
is represented as the list
    ['ANT', 'BOX', 'SOB', 'TO']
'''


def is_valid_word(wordlist, word):
    ''' (list of str, str) -> bool

    Return True if and only if word is an element of wordlist.

    >>> is_valid_word(['ANT', 'BOX', 'SOB', 'TO'], 'TO')
    True
    >>> is_valid_word(['ANT', 'BOX', 'SOB', 'TOON'], 'TO')
    False
    >>> is_valid_word(['ANT', 'BOX', 'SOB', 'TOON'], 'TOOK')
    False
    >>> is_valid_word(['ANT', 'BOX', 'SOB', 'TOON'], '')
    False
    '''
    return word in wordlist    


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
    if row_index in range(len(board)):
        return ''.join(board[row_index])

def make_str_from_column(board, column_index):
    ''' (list of list of str, int) -> str

    Return the characters from the column of the board with index column_index
    as a single string.

    >>> make_str_from_column([['A', 'N', 'T', 'T'], ['X', 'S', 'O', 'B']], 1)
    'NS'
    >>> make_str_from_column([['A', 'N', 'T', 'T', 'W'], ['X', 'S', 'O', 'B', 'P'], ['R', 'A', 'F', 'I', 'D'], ['Q', 'F', 'M', 'I', 'G']], 2)
    'TOFM'
    '''
    total = ''
    for index in range(len(board)):
        b = board[index][column_index]
        total = total + b
    return total
    


def board_contains_word_in_row(board, word):
    ''' (list of list of str, str) -> bool

    Return True if and only if one or more of the rows of the board contains
    word.

    Precondition: board has at least one row and one column, and word is a
    valid word.

    >>> board_contains_word_in_row([['A', 'N', 'T', 'T'], ['X', 'S', 'O', 'B']], 'SOB')
    True
    '''

    for row_index in range(len(board)):
        if word in make_str_from_row(board, row_index):
            return True

    return False


def board_contains_word_in_column(board, word):
    ''' (list of list of str, str) -> bool

    Return True if and only if one or more of the columns of the board
    contains word.

    Precondition: board has at least one row and one column, and word is a
    valid word.

    >>> board_contains_word_in_column([['A', 'N', 'T', 'T'], ['X', 'S', 'O', 'B']], 'NO')
    False
    >>> board_contains_word_in_column([['A', 'N', 'T', 'T'], ['X', 'S', 'O', 'B']], 'TO')
    True
    >>> board_contains_word_in_column([['A', 'N', 'T', 'T'], ['X', 'S', 'O', 'B'], ['E', 'A', 'O', 'C'], ['R', 'D', 'N', 'E']], 'TOON')
    True
    >>> board_contains_word_in_column([['A', 'N', 'T', 'T'], ['X', 'S', 'O', 'B'], ['E', 'A', 'O', 'C'], ['R', 'D', 'N', 'E']], 'TBCE')
    True
    >>> board_contains_word_in_column([['A', 'N', 'T', 'T'], ['X', 'S', 'O', 'B'], ['E', 'A', 'O', 'C'], ['R', 'D', 'N', 'E']], 'TORN')
    False
    >>> board_contains_word_in_column([['A', 'N', 'T', 'T'], ['X', 'S', 'O', 'B'], ['E', 'A', 'O', 'C'], ['R', 'D', 'N', 'E']], 'AXER')
    True
    >>> board_contains_word_in_column([['A', 'N', 'T', 'T'], ['X', 'S', 'O', 'B'], ['E', 'A', 'O', 'C'], ['R', 'D', 'N', 'E']], 'TO')
    True
    >>> board_contains_word_in_column([['A', 'N', 'T', 'T'], ['X', 'S', 'O', 'B'], ['E', 'A', 'O', 'C'], ['R', 'D', 'N', 'E']], 'ON')
    True
    >>> board_contains_word_in_column([['A', 'N', 'T', 'T'], ['X', 'S', 'O', 'B'], ['E', 'A', 'O', 'C'], ['R', 'D', 'N', 'E']], 'DON')
    False
    '''
    for i in range(len(board)):
        for column_index in range(len(board[i])):
            if word in make_str_from_column(board, column_index):
                return True
        
    return False


def board_contains_word(board, word):
    '''(list of list of str, str) -> bool

    Return True if and only if word appears in board.

    Precondition: board has at least one row and one column.

    >>> board_contains_word([['A', 'N', 'T', 'T'], ['X', 'S', 'O', 'B']], 'ANT')
    True
    >>> board_contains_word([['A', 'N', 'T', 'T'], ['X', 'S', 'O', 'B'], ['E', 'A', 'O', 'C'], ['R', 'D', 'N', 'E']], 'TOON')
    True
    >>> board_contains_word([['A', 'N', 'T', 'T'], ['X', 'S', 'O', 'B'], ['E', 'A', 'O', 'C'], ['R', 'D', 'N', 'E']], 'TO')
    True
    >>> board_contains_word([['A', 'N', 'T', 'T'], ['X', 'S', 'O', 'B'], ['E', 'A', 'O', 'C'], ['R', 'D', 'N', 'E']], 'ALE')
    False
    >>> board_contains_word([['A', 'N', 'T', 'T'], ['X', 'S', 'O', 'B'], ['E', 'A', 'O', 'C'], ['R', 'D', 'N', 'E']], 'ON')
    True
    >>> board_contains_word([['A', 'N', 'T', 'T'], ['X', 'S', 'O', 'B'], ['E', 'A', 'O', 'C'], ['R', 'D', 'N', 'E']], 'SOB')
    True
    >>> board_contains_word([['A', 'N', 'T', 'T'], ['X', 'S', 'O', 'B'], ['E', 'A', 'O', 'C'], ['R', 'D', 'N', 'E']], 'MANT')
    False
    '''
    for i in range(len(board)):
        for j in range(len(board[i])):
             if (word in make_str_from_row(board, i)) or (word in make_str_from_column(board, j)):
                return True
    return False
                


def word_score(word):
    '''(str) -> int

    Return the point value the word earns.

    Word length: < 3: 0 points
                 3-6: 1 point per character in word
                 7-9: 2 points per character in word
                 10+: 3 points per character in word

    >>> word_score('DRUDGERY')
    16
    '''
    points = 0
    i = 0
    if len(word) <= 2:
        return 0
    elif len(word) <= 6:
        points = len(word) * 1
        return points
    elif len(word) <= 9:
        points = len(word) * 2
        return points
    elif len(word) >= 10:
        points = len(word) * 3
        return points


def update_score(player_info, word):
    '''([str, int] list, str) -> NoneType

    player_info is a list with the player's name and score. Update player_info
    by adding the point value word earns to the player's score.

    >>> update_score(['Jonathan', 4], 'ANT')
    '''
    player_info[1] += word_score(word)

def num_words_on_board(board, words):
    '''(list of list of str, list of str) -> int

    Return how many words appear on board.

    >>> num_words_on_board([['A', 'N', 'T', 'T'], ['X', 'S', 'O', 'B']], ['ANT', 'BOX', 'SOB', 'TO'])
    3
    '''
    num = 0
    for i in range(len(words)):
        if board_contains_word(board, words[i]) == True:
            num = num + 1
    return num


def read_words(words_file):
    ''' (file open for reading) -> list of str

    Return a list of all words (with newlines removed) from open file
    words_file.

    Precondition: Each line of the file contains a word in uppercase characters
    from the standard English alphabet.
    '''
##    words_file = open('F:/programming/words.txt', 'r')
    words_file2 = [item.rstrip() for item in words_file]
    return words_file2
    
                      


def read_board(board_file):
    ''' (file open for reading) -> list of list of str

    Return a board read from open file board_file. The board file will contain
    one row of the board per line. Newlines are not included in the board.
    '''
##    board_file = open('F:/programming/board.txt', 'r')
##    for line in board_file:
    board_list = [line.rstrip() for line in board_file]
    lst = []
    for i in range(len(board_list)):
            lst.append(list(board_list[i]))
    return lst
	
    
    
