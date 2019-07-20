# -*- coding: utf-8 -*-
"""
A common security method used for online banking is to ask the user for three random characters from a passcode. For example, if the passcode was 531278, they may ask for the 2nd, 3rd, and 5th characters; the expected reply would be: 317.

The text file, keylog.txt, contains fifty successful login attempts.

Given that the three characters are always asked for in order, analyse the file so as to determine the shortest possible secret passcode of unknown length.

"""
from itertools import count

keys = {i.strip() for i in open("79.txt")}

def matches(key, passwd):
	pos0 = passwd.find(key[0])
	pos1 = passwd.find(key[1], pos0)
	pos2 = passwd.find(key[2], pos1)

	if any(i<0 for i in (pos0, pos1, pos2)): return False

	return pos0 < pos1 < pos2 
	
for candiate in map(str, count(100)):
	if all(matches(key, candiate) for key in keys):
		break

print(candiate)
