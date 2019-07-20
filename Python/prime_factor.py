##from math import floor
##
##def factors(n):
##    result = []
##    s = 0
##    for i in range(2,n+1): # test all integers between 2 and n
##        if n/float(i) == floor(n/float(i)): # is n/i an integer?
##            n = n/float(i)
##            s += 1
##    if s > 0:
##        for k in range(s):
##            result.append(i) # i is a pf s times
##    if n == 1:
##        
##        return result

def primefactors(x):
    factorlist=[]
    loop=2
    while loop<=x:
        if x%loop==0:
            x/=loop
            factorlist.append(loop)
        else:
            loop+=1
    return factorlist

##def lcm(a,b):
##    gcd, tmp = a,b
##    while tmp != 0:
##        gcd,tmp = tmp, gcd % tmp
##    return a*b/gcd
##
##def EuclidLCM(last):
##    return reduce(lcm,range(1,last+1))
