# -*- coding: utf-8 -*-
"""
Using names.txt (right click and 'Save Link/Target As...'), a 46K text file containing over five-thousand first names, begin by sorting it into alphabetical order. Then working out the alphabetical value for each name, multiply this value by its alphabetical position in the list to obtain a name score.

For example, when the list is sorted into alphabetical order, COLIN, which is worth 3 + 15 + 12 + 9 + 14 = 53, is the 938th name in the list. So, COLIN would obtain a score of 938 × 53 = 49714.

What is the total of all the name scores in the file?
"""

def name_score(n):
	s=0
	for i in n:
		s=s+ord(i)-64
	return s
k=open("22.txt","r")

names=[]

a=k.read()[1:-1].split('","')

a.sort()

s=0
for i in a:
	s=s+name_score(i)*(a.index(i)+1)
	
print(s)
