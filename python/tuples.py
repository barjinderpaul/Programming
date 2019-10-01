
#tuple = type of data structure
#tuple is immutable (can't be changed or modified cannot be inserted or deleted)
coordinates = (4,5)
print(coordinates[0]) #4
print(coordinates[1]) #5

#coordinates[0] = 4 gives error
# tuples used mostly used for where data does not change

#list of tuples
coordinates_list = [(4,5),(3,0),(4,3)]
print(coordinates_list) 
print(*coordinates_list[0])

coordinates_list[0]=2 # Works because we modify list
#But
#coordinates_list[0][0] = 2 #does not work because we cannot modify tupples

