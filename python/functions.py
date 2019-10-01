
#keyword for functions = def

def greet():
    print("Hi coders")
greet()

#functions with parameters
def greet_with_name(name):
    print("Hello " + name)
greet_with_name("Insta")

#functions with more parameters
def greet_more(name,age):
    print("hello "+name + " with age = " , age)
greet_more("Insta",69)

#functions which return

def age_mul_100(age):
    return (age*100)
print(age_mul_100(69))

def cube(num):
    #return(num*num*num)
    #or
    return(pow(num,3))
print(cube(4))
#store returned value
result = cube(4)
print(result)