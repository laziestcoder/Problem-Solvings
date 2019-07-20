def report_status(scheduled_time, estimated_time):

    '''(number, number) -> str

    Return the flight status (on time, early, delayed)
    for a flight that was scheduled to arrive at scheduled
    timed, but is now estimated to arrive at estimated_time.
    
    pre-condition: 0.0 <= scheduled_time < 24 and
    0.0 <= estimated_time < 24
    
    >>> report_status(14.3, 14.3)
    'on time'
    >>> report_status(12.5, 11.5)
    'early'
    >>> report_status(9.0, 9.5)
    'delayed'
    '''
    if scheduled_time == estimated_time:
        return 'on time'
    elif scheduled_time >= estimated_time:
        return 'early'
    else:
        return 'delayed'
