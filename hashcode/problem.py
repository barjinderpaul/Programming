toRead = open("e_shiny_selfies.txt","r")
toWrite = open("output.txt","w")
nn = []
flag=0
alll = []
for line in toRead:
    #print(line)
    if flag==0:
        nn.append(line)
        flag=1
    if flag==1:
        alll.append(line)
n = nn[0]
h = []
v = []
#print("printing all")
#print(*alll)
for i in range(0,len(alll)):
    #print("first char = ",alll[i][0])
    if alll[i][0] == 'H':
        #print("appending h ",i-1)
        h.append(i-1)
    if alll[i][0] == 'V':
        #print("appending v ",i-1)
        v.append(i-1)
#print("hsize, vsize " ,len(h),len(v) )
total = len(h) + int((len(v)/2 + len(v)%2))
#print(total)
toWrite.write(str(total)+"\n")
if len(h)>0:
    for i in h:
        #print(i)
        toWrite.write(str(i)+"\n")
i=0
j=1
if(len(v)>0):
    #print("in v")
    while(i<len(v) and j<len(v)):
        #print(v[i],v[j])
        ss = str(v[i])
        ss+= (" "+str(v[j]))
        toWrite.write(ss+"\n")
        i+=2
        j+=2


toRead.close()
toWrite.close()