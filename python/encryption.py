

#Encryption of a string
    #naive approach :
def encrypt():
    password = input("Enter password ") 
    #input = Insta
    enc = "/#@/"
    password = enc.join(password)
    print(password)
    #output = I/#@/n/#@/s/#@/t/#@/a

if __name__=="__main__":
    encrypt()