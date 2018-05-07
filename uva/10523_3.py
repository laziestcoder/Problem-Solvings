"""
/************************************************************************/
/*	Name: Towfiqul Islam 												*/
/*	uva id: 448714 														*/
/*	email id: towfiq.106@gmail.com										*/
/*	institute: IIUC														*/
/*	address: Chittagong, Bangladesh										*/
/*																		*/
/************************************************************************/

"""

def solve(N,A):
    total = 0
    currA = A
    for i in range(1,N+1):
        total += i*currA
        currA *= A
    return total
while(True):
    try:
        N,A = map(int, input().split())
        print(solve(N, A))
    except:
        break

