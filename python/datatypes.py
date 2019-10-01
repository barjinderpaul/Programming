
#data types ;

'''
1. none #NULL in other languages
2. numeric : int float complex bool
3. Sequence : List tuple set string range
4. mapping : dictionary 
'''
#Numeric
num = 2
print(type(num))
num = 2.2
print(type(num))
num = 6+9j #complex numbers
print(type(num))
num = True
print(type(num))
a = 2.2
print(int(a)) #float into int
a,num = 2,4
print(complex(a,num))

#sequence
listt = [1,2]
print(type(listt))

sett = {1,2}
print(type(sett))

tupp = (1,2)
print(type(tupp))

strr = "Insta"
print(type(strr))

#No characters in string but can be used a single character

print(list(range(0,10)))  #list as range
print(list(range(0,11,2)))  #list as range

#Mapping
#dictionary = keys and values
#Keys should be unique
dictt = {
    'Insta' : 'top',
    'fb' : 'bottom'
}
print(dictt.keys())
print(dictt.values())
print(dictt['Insta'])
print(dictt.__contains__('Insta'))
print(dictt.__sizeof__()) #size dictionary takes in memory
