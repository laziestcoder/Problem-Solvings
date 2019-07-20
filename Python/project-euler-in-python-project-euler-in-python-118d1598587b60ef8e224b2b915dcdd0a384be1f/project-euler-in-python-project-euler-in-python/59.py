import string
import itertools

cipher = [int(i) for i in open("59.txt").read().split(",")]

l = [ord(i) for i in string.ascii_lowercase]
keys = ((i, j, k) for i in l for j in l for k in l)

max_the = 0
res = ""
for key in keys:
	decoded = "".join(chr(i ^ j) for i, j in zip(cipher, itertools.cycle(key)))
	the_count = decoded.count("the");
	max_the = max(max_the, the_count)
	if(the_count == max_the):
		res = decoded

print(sum(ord(i) for i in res))
