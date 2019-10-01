def printer_error(s):
    count = 0
    for ch in s:
        if ch in "nopqrstuvwxyz":
            count+=1
    #print("error_printers(s) => \""+str(count)+"/"+str(len(s))+"\"")
    stringg = str(count)+"/"+str(len(s))
    return stringg
print(printer_error("aaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbmmmmmmmmmmmmmmmmmmmxyz")) 