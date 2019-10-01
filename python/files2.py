

#handling files in python :

#writing and appending to files in python 

#appends always at the end of the character of the file

filee = open("filesdata.txt","a")
print(filee.writable())
filee.write("\nDon't forget github")
print("Append successful :) ")
filee.close()

#if we use "w" , it can create a new file as well
#as overwrite the existing data in the file

write_file = open("write_file.txt","w")
print(write_file.writable())
write_file.write("New file is creataed")
print("Write successful : ))")
write_file.close()