import random
from operator import itemgetter
toRead = open("a_example.txt","r")
toWrite = open("output.txt","w")
nn = []
flag=0
alll = []
for line in toRead:
    #print(line)
    if flag==0:
        nn.append(line)
    if flag==1:
        #line = line[0:len(line)-1]
        firstpart = line[0:3].split(" ")
        secondpart = line[4:len(line)-1].split(" ")
        ll = []
        ll.append(firstpart)
        ll.append(secondpart)
        alll.append(ll)
    flag=1
n = nn[0]
h = []
v = []
fullh = []
fullv = []
#print("printing all")
#print(alll)
#random.shuffle(alll)
print(alll)

for i in range(0,len(alll)):
    #print("first char = ",alll[i][0])
    if alll[i][0][0] == 'H':
        fullh.append(alll[i])
        #print("appending h ",i-1)
        h.append(i)
    if alll[i][0][0] == 'V':
        #print("appending v ",i-1)
        fullv.append(alll[i])
        v.append(i)
#print("hsize, vsize " ,len(h),len(v) )
#sorted(alll)

sorted(fullh,key=itemgetter(0,1,1))
print(fullh)
total = len(h) + int((len(v)/2 + len(v)%2))
#print(total)
toWrite.write(str(total)+"\n")
k = 0
i = 0
j = 1

while k<len(h) or (i<len(v) and j<len(v))>0:
    #print("k",k)
    if i<len(v) and j<len(v):
        ss = str(v[i])
        ss+= (" "+str(v[j]))
        toWrite.write(ss+"\n")
        i+=2
        j+=2
    if k<len(h):
        toWrite.write(str(h[k])+"\n")
        k+=1
    

toRead.close()
toWrite.close()