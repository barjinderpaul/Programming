
'''
Python strings

#formatting 

#using modulus operator used for string
age = int(input())
name = input()
print("Hi %s, My age is %d"%(name,age))

#formatting with .format function

print("Hi {}, my age is {}".format(name,age))

#python lists

a = [1,2,3]
b = a.copy()
print(b)

string = "Hello Insta"
print('A' in string)

if 'a' in string:
    print (string)

listt = [1,323,132,4,43,2,3]
print(sorted(listt))    #simply sorts list
print(sorted(listt,reverse=True))   #sorted decreasing order

#using key in sorted function 
lst = ['Insta','Facebook','Google','hello','a']
print(sorted(lst,key=len))  #sorts on basis of length of string

#sorting based on last char :
def last(x):
    return x[-1:]

#sorts first on last char and then on length
print(sorted(sorted(lst,key = last),key=len))

tup = [(1,'hi'),(2,'avc'),(0,'fff')]
print(sorted(tup)) #sorts according to first val in tuple
print(sorted(tup,key=last)) #sorted based on string last char
print(sorted(tup,key=len)) #sorts according to length

'''

#regular expression :

import re
match = re.search('iig','piig')
print(match.group())

match = re.search('..g','paaiigs')
print(match.group())

#prints a 4 word char followed by a ':'
match = re.search(r':\w\w\w\w','4 word char :abcd')
print(match.group())

#prints first occured 4 word char
match = re.search(r'\w\w\w\w','4 word char :abcd')
print(match.group())


# + uses 1 or more chars after :
# * uses 0 or more chars after :
match = re.search(r':\w+','sfhsdjfh :asda&')
print(match.group())    #asda

# \S for non whitespace chars :
match = re.search(r':\S+','sfhsdjfh :asda&')
print(match.group()) #asda&

match = re.search(r':\w*','sfhsdjfh :')
print(match.group())

#email checking with regular expressions :

pat = 'this is my email = abcd.efg@gmail.com'
match = re.search(r'\w[\w.]*@[\w.]+',pat)
print(match.group())

''' Explanation :
\w = first letter should be a word char (a-z or 0-9)
[\w.]* = after the first word char there can be any
        number of word chars as well a '.' 
        '*' means that there could be 0 or more word chars
            after the first word character
@ = there should be '@' after atleast 1 word chars
[\w.]+ = after @ there can be word chars as well as .
        + here means that after '@' there should be atleast 1 char

'''

#get username and passwords from email :
pattern  = 'this is email = abcd.efg@gmail.com'
match = re.search(r'(\w[\w.]*)@([\w.]+)',pattern)
print(match)
print('Username = ',match.group(1)) #for first ()
print('Hostname = ',match.group(2)) #for first ()