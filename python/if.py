
#if statements 
# if = true
# else = false

age = eval(input("Enter age -"))
if(age>18):
    print("Adult")
else:
    print("Child")

#Complex if

age = eval(input("Enter age "))
drunk = eval(input("Drunk or not "))
if(age>18):
    if(drunk):
        print("You are drunk and legal to drink")
    else:
        print("You are legal but not drunk")
else:
    if(drunk):
        print("You are not legal to drink but you are drunk")
    else:
        print("You are a good boy")

#elif
age = eval(input("Enter age"))
if age>18 and age<24:
    print("age between 18 and 24")
elif age>24 and age<60:
    print("Age between 24 and 60")
else:
    print("Don't know your age")