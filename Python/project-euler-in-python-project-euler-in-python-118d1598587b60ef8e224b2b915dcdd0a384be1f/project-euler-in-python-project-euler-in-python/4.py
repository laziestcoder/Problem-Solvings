# -*- coding: utf-8 -*-
"""Problem 4
16 November 2001

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91  99.

Find the largest palindrome made from the product of two 3-digit numbers."""

def is_palindrome(a):
	a=str(a)
	for i in range(len(a)):
		front=i
		back=len(a)-(i+1)
		if a[front]!=a[back] and front<back:
			return False
	return True
	
	
palindromes=[]
for i in range(100,1000):
	for j in range(100,1000):
		if(is_palindrome(i*j)):
			palindromes.append(i*j)

print max(palindromes)