


'''
How to write and send secret codes in pictures:
The programming way :)

@routinecoders

Swipe to see codes =>
Don't forget to follow and share ❤
'''


import cv2
'''
The main magic function
'''
def bs(msg):
    for char in (msg):
        bitt = ord(char)
        for i in range(8):
            yield (bitt & (1 << i)) >> i


'''
File in which secret code is present and 
the image in which code will be embedded
'''
secret_code = bs(open("secret_msg_file.txt", "r").read() * 10)
img = cv2.imread('image copy.jpeg', cv2.IMREAD_GRAYSCALE)

for codee in range(len(img)):
    for wordd in range(len(img[0])):
        #to write secret message
        img[codee][wordd] = (img[codee][wordd] & ~1) | next(secret_code)
#final image generator
cv2.imwrite("final_secret_code.jpeg", img)

'''
Steps to restore the code from the image :)
'''
img = cv2.imread('final_secret_code.jpeg', cv2.IMREAD_GRAYSCALE)
i = 0
bs = ''
list_c = []
for r in img:
    for p in r:
        bs = str(p & 0x01) + bs
        i += 1
        if(i == 8):
            list_c.append(chr(int(bs, 2)))
            i = 0
            bs = ''
print(''.join(list_c))


'''
Liked the post? 😍
Do follow because more amazing content is coming ✨🤪
Share and like 🗣 ❤
Check other amazing posts too ❤❤
'''