#reads from file
name = raw_input('Enter Filename: ')
handle = open(name, 'r')
#assigns intial variable values to 0
line_tot = 0
word_tot = 0
char_tot = 0
#loop that counts lines, words, characters
with handle as f:
	for line in f:
		words = line.split()
		print words
		#counting segment
		line_tot += 1
		word_tot += len(words)
		char_tot += len(line)
#output
print "Line total:",line_tot,"lines"
print "Word Total:",word_tot,"words"
print "Character Total:",char_tot,"characters"
