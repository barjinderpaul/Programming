#handling files in python :

#reading from the file

#opening the file
opened_file = open("filesdata.txt","r")
#major modes to open the file:
'''
    r = only read
    r+ = read and write
    a = only append in the file
'''
#to check if the file is readable
print(opened_file.readable())
#reading data from the file in one go
#print(opened_file.read())

#reading line by line
for filee in opened_file.readlines():
    print(filee)

#or
while opened_file.readline!="\n":
    if(opened_file.readline!="\n"):
        break
    print(opened_file.readline())

#specific printing of the line
#print(opened_file.readlines()[1])

#closing the file
opened_file.close()