

'''
Different types of arguments that
we pass to functions in python
'''

#keyword arguments :
'''
used mostly when there can be interchange 
in positions of arguments while calling
the function
'''
def print_data(name,age):
    print(name,age)

print("abc",18)
#error  = print(18,"abc")
print_data(name="abc",age = 18)
#or can interchange positions
print_data(age = 18, name = "abc") 


#default arguments
'''
used mostly when while calling the
function an argument might not be passed
'''

#here, If the value of age will not be passed,
# it will be = 18
def p_data(name,age = 18):
    print(name,age)

p_data("abc",20) #overrides age value
p_data("abc") #takes default value


#variable length arguments in python :
'''
used when we are not sure about the number
of arguments that will be passed to our function
'''
#here b = variable length argument
#type(b) = tuple
def return_sum(a,*b):
    summ = a
    for i in b:
        summ+=i
    return summ

print(return_sum(1,2,3,4,5))


#keyworded variable length arguments:
'''
used when there are certain fields to be
passed to a function 
'''
#name is compulsory argument
# **data will be in key:value form

def p_data(name,**data):
    print(name)
    for key,values in data.items():
        print(key,values)

p_data("instagram",age = 18, mob = 1234)

