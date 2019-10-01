'''
t = int(input())
for i in range(0,t):
    k = int(input())
    n = list(map(int,input().split()))
    flag=0
    s1=""
    s2=""
    if(k%2==0):
        for i in range(0,len(n)):
            if i== ( int(len(n)/2) - 1):
                flag=1
                continue
            if flag==0:
                s1=s1 + str(n[i])
            if(flag==1):
                s2 = s2 + str(n[i])
       # print(s1,s2[::-1],"if")
        if(s1 == s2[::-1] and n[int(len(n)/2)] == 7):
            print("yes")
        else:
            print("no")
    else:
        for i in range(0,len(n)):
            if i== int(len(n)/2):
                flag=1
                continue
            if flag==0:
                s1=s1 + str(n[i])
            if(flag==1):
                s2 = s2 + str(n[i])
      #  print(s1,s2[::-1],"else")
        if(s1 == s2[::-1] and n[int(len(n)/2)] == 7):
            print("yes")
        else:
            print("no")
        
'''
'''
n, c = input().split(" ")
n = int(n)
c = int(c)
tc=1
nflag = 0
flag = 0
flag1 = 0
total_coins=1000
while(flag==0 and total_coins>0):
    if(nflag==0):
        n=int(n/2)
    print(1,n)
    total_coins-=1
    inputt = int(input())
    if inputt==1:
        tc=n
        print(2)
        total_coins-=c
        flag1=1
    if inputt==0 and flag1==1:
        for i in range(n+1,n*2+1):
            print(1,i)
            total_coins-=1
            inputt=int(input())
            if inputt==1:
                print(3,i)  
                flag=1
    nflag=0
    if inputt==0:
        n=n*2
        nflag=1
if(total_coins==0):
    print()
    '''