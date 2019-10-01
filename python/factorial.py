

'''
different methods to find factorial in python
'''

#Recursive way

n = int(input())
def fact(n):
    if(n<=1):
        return 1
    return n*fact(n-1)

print(fact(n))


#Iterative way :

n = int(input())
def facto(n):
    f = 1
    for i in range(1,n+1):
        f = f*i
    return f

print(facto(n))

#One - liner :

from math import factorial
n = int(input())
print(factorial(n))