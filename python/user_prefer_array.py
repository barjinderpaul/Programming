
#user input array
from array import array

numbers = array('i',[])
n = int(input("enter length of the array "))
for i in range(n):
    value = int(input("enter value "))
    numbers.append(value)

print(*numbers) #Prints the values of the array

search_number = int(input("Enter the number to find "))
print(numbers.index(search_number))
