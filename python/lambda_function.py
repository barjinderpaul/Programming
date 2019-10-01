

#lambda / anonymous functions in python :

#square of a number :

'''
lambda function used only when we
have to evaluate only 1 expression 
in a function.
'''
func = lambda a:a*a
print(func(5))

add = lambda a,b:a+b
print(add(2,4))

#filter evens and perfect squares from list

from math import ceil
from math import sqrt
from math import floor

lst = [2,4,6,9,11,12,13,14,16]

even_numbers = list(filter(lambda a:a%2==0,lst))
print(*even_numbers)

perfect_squares = list(filter(lambda i:ceil(sqrt(i))==int(sqrt(i)),lst))
print(perfect_squares)

#lambda with map:
'''
map is used when we want to map our values to something else:
lime we can double all values in perfect_squares
'''
double_perfect = list(map(lambda a : a*2,perfect_squares))
print(double_perfect)

#lambda with reduce :
'''
reduce is used when we want to reduce our value
to a single value, like we want to sum our 
double_perfect list
'''
from functools import reduce
sum = reduce(lambda a,b:a+b, double_perfect)
print(sum)