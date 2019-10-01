string = "This is a python string"
listt = []
listt = string.split(" ")
print(*listt)
if(listt.index("is")>=0):
    print(listt.index("is"))
else:
    print("Not found")

