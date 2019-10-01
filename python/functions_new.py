
#functions in python :

#Return mulyiple values from functions :

def square_two(a,b,c):
    a = a ** 2
    b = b ** 2
    c = c ** 2
    return a,b,c

a,b,c = square_two(2,4,8)
print(a,b,c)