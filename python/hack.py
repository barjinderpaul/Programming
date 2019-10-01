n = int(input())
data=[]
sum=0
for i in range(2*n):
    data.append(input())
search = input()
for i in data:
    if(i == search):
        for j in range(i+1,i+4):
            sum+=float(j)
print(sum/3)