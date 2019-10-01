


'''
How to use local and global variables in the
same function
'''
i_am_global = 10
def print_local_global():
    i_am_global = 20 #local variable

    #it is impacting global variable
    globals()['i_am_global'] = 100

    print("local val of global =",i_am_global) #20
    print("changed global val =",globals()['i_am_global'])
    #100

print_local_global() #call function
print("global value ",i_am_global) #100