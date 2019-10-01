


#copying files the programming way :

#input image = 'image copy.jpeg'
f1 = open('image copy.jpeg','rb')
#rb = opens file in binary read mode
f2 = open('copied image.jpeg','wb')
#wb = opens file in binary write mode
for i in f1:
    f2.write(i)

'''
execute the above program and new image with
name = 'copied image.jpeg' will be created
Thank me later :)
'''