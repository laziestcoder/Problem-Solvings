def lines_startswith(file, letter):
    '''(file open for reading, str) -> list of str

    Return the list of lines from file that begin with letter. The lines should have the
    newline removed.

    Precondition: len(letter) == 1
    '''

    matches = []

    # CODE MISSING HERE
##    for line in file:
##        if letter == line[0]:
##           matches.append(line.rstrip('\n'))

##    for line in file:
##        if letter in line:
##            matches.append(line.rstrip('\n'))
    for line in file:
        if line.startswith(letter):
            matches.append(line.rstrip('\n'))
##    for line in file:
##        matches.append(line.startswith(letter).rstrip('\n'))

    return matches


def write_to_file(file, sentences):
    '''(file open for writing, list of str) -> NoneType

    Write each sentence from sentences to file, one per line.

    Precondition: the sentences contain no newlines.
    '''
    for s in sentences:
        file.write(s)
    file.write('\n')
