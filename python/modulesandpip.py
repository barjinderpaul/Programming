
#module is a file that we can just input and access
#all the data from that module :

import my_own_module

'''
my_own_module contains these lines of code :

list_to_traverse = [1,2,3,4,5]

def add_to_list(num):
    list_to_traverse.append(num)

'''
#we have direct access to these lines of code:

#print the list
print(my_own_module.list_to_traverse)

number = int(input("Enter number to add into list"))
my_own_module.add_to_list(number)

print(my_own_module.list_to_traverse)

'''
pip is a package manager which is used to use 3rd party
or external modules which are developed by other developers

The modules installed by pip are stored in the lib folder in
site-packages 
'''