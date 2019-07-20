def collatz(i):
	count=1
	while not i==1:
		if not i%2: #if str(i)[-1] in ["2","4","6","8","0"]:
			i=i/2
		else:
			i=3*i+1
		count=count+1
	return count

m=0
n=0
for i in xrange(2,1000000):
	k=collatz(i)
	if k>m:
		print i
		m=k
		n=i 
