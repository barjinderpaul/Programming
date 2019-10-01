
#secret word Social guess game in python

secret_word ="insta"
guess=""
i=1
flag=0
while(secret_word!=guess and flag==0):
    guess=input("Enter guess :) ")
    i+=1
    if(secret_word==guess):
        break
    if(i>3):
        print("Number of tries are over :(")
        flag=1
        break
    print("Sorry, Try Again! :P")
if flag==0:
    print("You found the secret word :)))")