s = input()
lst = []
for i in range(0,len(s)):
    if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/' ):
        if( s[i]=='+'):
            b = lst.pop()
            a = lst.pop()
            lst.append(a+b)
        elif s[i] == '-':
            b = lst.pop()
            a = lst.pop()
            lst.append(a-b)
        elif s[i] == '*':
            b = lst.pop()
            a = lst.pop()
            lst.append(a*b)
        elif s[i] == '/':
            b = lst.pop()
            a = lst.pop()
            lst.append(a/b)
    else:
        lst.append(int(s[i]))        
print(*lst)   
		