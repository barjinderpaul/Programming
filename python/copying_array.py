
from numpy import *
arr = array([1,2,3,4,5])

#add 5 to each element in array
arr = arr + 5
print(arr)

#addition of 2 arrays
arr1 = array([1,2,3,4,5])
arr2 = array([2,3,4,5,6])
arr3 = arr1 + arr2
print(arr3)

#square root of all array :
print(sqrt(arr1))

#concatenation of 2 arrays :
arr4  = concatenate([arr1,arr2])
print(arr4)

#copying an array 

arr1 = array([1,2,3,4,5])
arr2 = arr1 
print(arr1) #belongs to same address
print(arr2) #belongs to same address

#shadow copy and dependent on original array :
arr2 = arr1.view() #shadow copy | different address

#deep copy and independent of original array :
arr2 = arr1.copy() #deep copy | different address 