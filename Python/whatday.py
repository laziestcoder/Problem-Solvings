def what_day_after(today, days):
    '''(str, int) -> str
    returns the day from today after days.
    '''
    r = days%7
    l = [ 'saturday', 'sunday', 'monday', 'tuesday', 'wednesday', 'thursday', 'friday']
    i = l.index(today)
    ##s = i + r
    return l[i + r]
