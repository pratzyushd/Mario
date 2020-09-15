userInput = input("Please enter a non-negative integer less than 23: ")

#Validation of input
valid = False
while not valid:
	#Type validation
	try:
		userInput = int(userInput)
		#Range validation
		if userInput < 23 and userInput > 0:
			valid = True
		else:
			userInput = input("Please enter a non-negative integer less than 23: ")
	except ValueError:
		userInput = input("Please enter a non-negative integer less than 23: ")

#For loop to print out pyramid
for i in range(1,userInput+1):
	numOfSpace = userInput - i
	numOfHash = userInput+1 - numOfSpace
	print(" "*numOfSpace, "#"*numOfHash)