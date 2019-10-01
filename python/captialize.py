

s = input()
slist = s.split(" ")
for wl in slist:
    if(wl.isalpha()):
       print(wl.title(),end=" ")
    else:
        print(wl,end=" ")
