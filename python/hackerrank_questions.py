'''
Question  = list comprehensions 


even_numbers = [x for x in range(2,13) if(x%2==0)]
print(even_numbers)
#with lamda function :
lst  = [ 2,3,4,5,6,7,8,9,10]
even_numbers = list(filter(lambda x : x%2==0,lst))
print(even_numbers)
#reduce
from functools import reduce
sum = reduce(lambda a,b : a+b,even_numbers)
print(sum)

#because filter is used for condition filtering
#map is used to map values
#reduce is used to reduce values to a single value
#map :
even_numbers_squares = list(map(lambda x : x*x,even_numbers))
print(even_numbers_squares)

'''

'''
Question = finding the percentage :

#concept used - dictionary :
#take input from user as dictionary and find a given key in the dictionary and calculate avg of corressponding value 
# of that key 
n = int(input)
d = {}
for i in range(n):
    lst = list(map(str,input().split()))
    values = [float(lst[1]),float(lst[2]),float(lst[3])]
    d[lst[0]] = values
search = input()
key_value = d.get(search)
print('%.2f' %(sum(key_value)/3))

'''
'''
Question = Text wrap 

def wrap(string, max_width):
    return_string = ""
    count = 0
    for ch in string:
        if count==max_width:
            return_string = return_string + "\n"
            count = 0
        return_string = return_string + ch
        count+=1
    return return_string

or 
import textwrap
textwrap.fill(string,max_width)

'''

'''
Question : String formatting :


def print_formatted(number):
    # your code goes here
    spaces = number.bit_length()
    #print(spaces)
    for i in range(1,number+1):
        b = bin(i)
        b = b[2:]
        o = oct(i)
        o = o[2:]
        h = hex(i).upper()
        h = h[2:]
        i = str(i)
        print(i.rjust(spaces," "),o.rjust(spaces," "),h.rjust(spaces," "),b.rjust(spaces," "),sep=' ')

or =

print (str(i).rjust(w,' '),str(oct(i)[1:]).rjust(w,' '),str(hex(i)[2:].upper()).rjust(w,' '),str(bin(i)[2:]).rjust(w,' '),sep=' ')

'''

'''
Question = Merge the tools 

def merge_the_tools(string, k):
    # your code goes here
    c = 0
    s = ""
    for ch in string:
        c+=1
        s = s+ch
        if(c==k):
            stt = set()
            new_str = [x for x in s if not (x in stt or stt.add(x))]
            for i in new_str:
                print(i,end="")
            print()
            c=0
            s=""
    '''

'''
Question : Symmetric Difference  
'''
'''
n1 = int(input())
lst = list(map(int,input().split()))
lst = set(lst)
lst = set(sorted(lst))
n2 = int(input())
lst2 = list(map(int,input().split()))
lst2 = set(lst2)
lst2 = set(sorted(lst2))
print(lst2)
s3 = lst.difference(lst2)
for i in sorted(lst ^ lst2):
    print(i)    
    '''

'''
Topic = Itertools
'''
'''
#combinations:
from itertools import combinations
lst = [1,2,3,4,5]
lst_c = list(combinations(lst,2))
print(lst_c)
#sum print([x+y for x,y in lst_c])
print([x*y for x,y in lst_c])
'''