'''

#sets in python :

#There are only unique elements in set,so if we have
duplicate_list = [1,2,2,3,3,4,5,5]
print(duplicate_list) #will also print duplicates

#converting to set
new_list = set(duplicate_list)
#now it will remove all duplicates:
print(new_list)
'''
#address of varibles :
name = "abc"
print(id(name))

a=10
b=a
print(id(a))
print(id(b))
print(id(10))
print(id(1))
k = 10
print(id(k))

#Thuss memory addresses are for value/data and not for varibles

#Whenever any data is not used by any variable,it is automatically garbage collected

#No concepts of const in python

print(type(a))