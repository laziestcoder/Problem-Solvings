m=0

for i,j in [(i,j) for i in range(101) for j in range(101)]:
	s=sum(map(int,list(str(i**j))))
	if s>m: m=s

print(m)
