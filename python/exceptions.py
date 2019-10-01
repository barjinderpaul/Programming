#Exceptions in python :
#input number exception:
#If users not enters an integer, it will display invalid input
try:
    first_no = int(input("Enter first number "))
    print(first_no)
except:
    print("Invalid input")

#Divide by zero
try:
    first_no = int(input("Enter first number "))
    result = first_no/0
except ZeroDivisionError as err:
    print(err)

#combining both :
try:
    input_no = int(input("Enter a number"))
    input_no/0
    print(input_no)
except ZeroDivisionError as err:
    print(err)
except ValueError as err:
    print(err)
except:
    print("Exception occured")