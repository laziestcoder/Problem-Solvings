if type(varA) == str or type(varB) == str:
    print 'string involved'
elif varA > varB:
    print 'bigger'
elif varA == varB:
    print 'equal'
else:
    # If none of the above conditions are true,
    # it must be the case that varA < varB
    print 'smaller'