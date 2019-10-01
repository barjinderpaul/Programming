t = int(input())
strength, string = list(map(str,input().split(" ")))
strength = int(strength)
power = 1
for ch in string:
    if ch == 'M':
        if(strength<=power):
            i=0
            for ch2 in string:
                if(ch2=="MK"):
                    flag=1
                i+=1
            if flag==1:
                if(i>=len(string)):
                    print("IMpossible")
                    continue
                print(i)
        else
            power = power*3
    if(ch == 'K'):
        if strength >=power:
            pass
        else
            for ch2 in string:
                if(ch=="")
