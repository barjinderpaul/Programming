

#format function in python:

lst = ['Insta','fb','google','git']

def words_more_than_len_4(lst):
    count = 0
    for i in lst:
        if(len(i)>4):
            count+=1
    return count

count = words_more_than_len_4(lst)
print("Total count = {}".format(count))