

#2d arrays in numpy
from numpy import *
arr1 = array([
    [1,2,3],
    [2,3,4]
])

print(arr1.ndim) #dimensions we are working on
print(arr1.size)

#convert 2d to 1d array ;
arr2 = arr1.flatten()
print(arr2)

#convert 1d to 2d array :
arr = array([1,2,3,4,5,6])
arr2 = arr.reshape(2,3) #rows,colums
print(arr2)

#2-d matrix functions in python
matrix2d = matrix('1,2,3;4,5,6;0,8,9')
matrix2d2 = matrix('3,4,4;1,3,4;43,2,2')
#diagonal elements :
print(diagonal(matrix2d))

#min element of 2d array :
print(matrix2d.min())
#max element of 2d array :
print(matrix2d.max())

#multiplication of 2d array :
print(matrix2d * matrix2d2)
