#arrays in python
from array import *

'''
codes for datatypes :
b = signed char, B = unsigned char
i = signed int, I = unsigned int
l = signed long, L = unsigned long
f = float, d = double
h = signed short, H = unsigned short 
u = py_unicode character
'''
#value should be of same type
values = array('i',[1,2,3,4]) 
print(*values)
print(values.buffer_info()) #address size of the array
print(values.typecode) #type of array we are using

new_values = values.__copy__()
#or
new_values = array(values.typecode,(i for i in values))
print(*new_values)
#square :
new_values_square = array(values.typecode,(i*i for i in values))
print(*new_values_square)

for i in values:
    print(i,end=" ")
print()
#character array
char_array = array('u',['a','b','b'])
#char_array = array('u',['a','sdb','b']) #error
print(*char_array)