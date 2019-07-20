"""
Problem 82

NOTE: This problem is a more challenging version of Problem 81.

The minimal path sum in the 5 by 5 matrix below, by starting in any cell in the left column and finishing in any cell in the right column, and only moving up, down, and right, is indicated in red and bold; the sum is equal to 994.

	
131	673	234	103	18
201	96	342	965	150
630	803	746	422	111
537	699	497	121	956
805	732	524	37	331
	

Find the minimal path sum, in matrix.txt (right click and 'Save Link/Target As...'), a 31K text file containing a 80 by 80 matrix, from the left column to the right column.
"""
matrix = [[[int(i), float("inf")] for i in line.strip().split(",")] for line in open("82.txt")]

for col in range(len(matrix[0])):
	if col == 0: # right
		for row in range(len(matrix)):
			matrix[row][col][1] = matrix[row][col][0]
		continue
	
	# up -> bottom
	for row in range(len(matrix)):	
		if row == 0: 
			matrix[row][col][1] = matrix[row][col-1][1] + matrix[row][col][0]
		else:
			matrix[row][col][1] = min((
										matrix[row][col-1][1], # left
										matrix[row-1][col][1]  # up
									)) + matrix[row][col][0]   

	# bottom -> up
	for row in range(len(matrix)-1, -1, -1):	
		if row == len(matrix) - 1: 
			continue
		else:
			matrix[row][col][1] = min((
										matrix[row][col][1], # itself
										matrix[row+1][col][1] + matrix[row][col][0] # down
									))
	

with open("out.txt", "w") as f:
	for line in matrix:
		f.write("\t\t".join(map(repr, line)))
		f.write("\n")
		
print(min((row[-1] for row in matrix), key=lambda i: i[1]))