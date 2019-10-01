
#dictionary = key-value pairs
#Keys should be unique
#Values can be duplicates
months = {
    #key : value
    "Jan": "January",
    "Feb": "Februrary",
    "Mar": "March",
    "Apr": "April",
}
print(months) #prints full dictionary
print(months["Jan"]) #Accessing with key
print(months.get("Mar")) #get method
print(months.get(1,"Not a valid key")) #Invalid Key

#dictionary user input 

in_dict = dict()
i=0
while(i<4):
    keys= input("Enter the key")
    values = input("Enter the value")
    in_dict[keys]=values
    i+=1
print(in_dict)