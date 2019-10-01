#Strings = plain texts
#use " "
print("Hello \".py Coders\" ")

#string Variable
greetings = "Hello .py coders"
print(greetings)

#Concatenation 
print(greetings + "!!!")

#functions
#lower
print(greetings.lower())
#upper
print(greetings.upper())
#isLower
print(greetings.islower())
#isUpper
print(greetings.isupper())
#length
print(len(greetings))
#index
print(greetings.index(".")) #returns index of character
#replace
print(greetings.replace(".",".."))

#Characters
print(greetings[0])
print(greetings[1])
print(greetings[len(greetings)-1]) #last character