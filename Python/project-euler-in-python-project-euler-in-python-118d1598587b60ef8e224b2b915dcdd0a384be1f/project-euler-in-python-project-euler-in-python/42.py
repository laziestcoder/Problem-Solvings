# -*- coding: utf-8 -*-
"""
The nth term of the sequence of triangle numbers is given by, tn = ½n(n+1); so the first ten triangle numbers are:

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

By converting each letter in a word to a number corresponding to its alphabetical position and adding these values we form a word value. For example, the word value for SKY is 19 + 11 + 25 = 55 = t10. If the word value is a triangle number then we shall call the word a triangle word.

Using words.txt (right click and 'Save Link/Target As...'), a 16K text file containing nearly two-thousand common English words, how many are triangle words?
"""

class triangle:
	def __init__(self):
		self.triangles=[1]
	def add(self):
		self.triangles.append(self.triangles[-1]+len(self.triangles)+1)
	def calculate_to(self,n):
		while self.triangles[-1]<n:
			self.add()

def name_score(n):
	s=0
	for i in n:
		s=s+ord(i)-64
	return s

k=open("42.txt","r")

names=[]

a=k.read()[1:-1].split('","')

t=triangle()

s=0
for i in a:
	n=name_score(i)
	t.calculate_to(n)
	if n in t.triangles:
		s=s+1
	
print s
