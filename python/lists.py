

#Lists

#Multiple values in one variable
friends = ["insta","fb","snapchat"]
print(friends[0])
print(friends[-1]) #-ve for access from back
print(friends[1:]) #from 1 to end
print(friends[0:2]) #from 0 to 1 exc;iding last
print(friends[::-1]) #prints in reverse

friends_with_love = ["insta",100,"fb",90,"snapchar",95]
print(*friends_with_love) #elements of list

#List functions :
friends = ["insta","fb","snapchat","github"]
numbers = [1,2,4,3,123,22]

#extend = append
friends.extend(numbers)
print(friends)
#append to append single
#insert
friends.insert(1,"new_friend") #inserts at index 1
print(friends)
#remove
friends.remove(1) #1 removed
print(friends)
#clear
#friends.clear()
print(friends)


#pop = removes last element
friends.pop()
print(friends)
#search element
print(friends.index("fb")) #returns index of fb
#count occurance
print(friends.count(2)) #no. of time 2 occurs
#sort
numbers.sort()
print(numbers)
#reverse
numbers.reverse()
print(numbers)
#copy
friends2 = friends.copy()
print(friends2)