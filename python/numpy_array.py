from numpy import *
'''
numbers = array([1,2])
print(*numbers)
'''
#numpy arrays :
'''
array(), linspace(),
logspace(), arange(), 
zeroes(), ones()
'''
arr = array([1,2,3,4],int)
print(*arr) #elements of array
print(arr.dtype) #int32

#lingspace():
'''
breaks range into 8 parts
by default = 50 parts
'''
arr = linspace(1,16,8)
print(arr) 

#arange():
'''
mention first, last element and no. of
steps as well
'''
arr = arange(1,16,2)
print(arr)

#logspace():
'''
gap between elements dependes upon
log of it
''' 
arr = logspace(1,40,2)
print('%.2f' %arr[1])

#zeroes()
'''
All elements will be initialized to 0
'''
arr = zeros(10,int) #size, data_type
print(arr)

#ones()
'''
All elements will be initialized to 1
'''
arr = ones(10,int) #size, data_type 
print(arr)
