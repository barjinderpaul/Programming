def toString(lst):
    return ''.join(lst)
def printlex(string,data,last,index):
	length = len(string)
	for i in range(length):
		data[index] = string[i]
		if index==last:
			print(toString(data))
		else:
			printlex(string,data,last,index+1)
def lexString(s):
	length = len(s)
	data = [""]*(length+1)
	string = sorted(s) #to make lexiographical sorted permutations
	printlex(string,data,length-1,0)

s = str(input())
print(lexString(s))