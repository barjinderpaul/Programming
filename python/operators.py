
#assignment
a = 2
print(a)

a+=2
print(a)

a,b=5,6
print(a,b)

#unary operators
n=7
print(-n)
n= -7
print(-n) #- and - = +

#relational :
a,b=5,6
print(a<b,a==b,a>b,a>=b,a<=b,a!=b)

#logical operators
a,b = 5,4
print(a<8 and b<5 , a>10 or b<5)
x = True
print(not x, x)

#bitwise operators
num = 2
print(~num) #~ is 2's compliment of a number

num = 2
print(2 & num) #bitwise and

num = 12
print(2|num)    #bitwise or

num = 2
print (2 ^ 4)   #bitwise xor

num = 10
print(num<<2)   #left shift #num always increases

num = 10
print(num>>2)   #right shift #num always decreases
