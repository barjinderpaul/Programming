
#Input from User

name = input("Enter your name - ")
age = input("Enter your age - ")

print("You are " + name + " with age = "  + age )

#default datatype = string
print(type(age))

#To take input as an int
int_age = int(input("enter age - "))
print(type(int_age))

#To take input as float
float_numbers = float(input("enter marks "))
print(type(float_numbers))

#To automatically take input
eval_input = eval(input("Enter int or float or bool"))
print(type(eval_input))