print(12)
setwd()

#variables
myNum = 1


#data types
print(class('5'))
print(class(4L))
print(class(4i))
print(class(2))
print(class(T))
print(class(charToRaw('Sample')))


#checking datatypes
is.integer('12')
is.integer(12L)

is.character(12)
is.character('12')

#arithmetic operators
sprintf("4+5 = %d",4+5)
sprintf("4-5 = %d",4-5)
sprintf("4*5 = %d",4*5)
sprintf("4/5 = %f",4/5)

sprintf("5%4 = %d",5%%4)

#Vectors

numbers = c(1,2,3,4,5)
numbers

numbers[1]
numbers[1:3]
numbers[length(numbers)]

numbers[-1] #ignore 1st value
numbers[-1:-3] #ignores first 3 values
numbers[1] = 2

length(numbers)

sort(numbers, decreasing = T)

#sequence
oneToTen = 1:10
oneToTen

add3 = seq(from=3,to=27,by=3)
add3

evens = seq(from=2,by=2,length.out = 10)
evens

#repeats
rep(x=2,times=5,each=4)
rep(c(1,2,3),each=2,times=2)
rep(c(1,2,3),times=2,each=2)


#cat
cat("THis is a",T&&T, "value")

#if, else if and else
age=18
if(age>=18){
  print("Drive and vote")
}else if(age>=16){
  print("Drive")
}else{
  print("wait")
}


#switch
grade = "A+"
switch(grade,
       "A+" = print("Great"),
       "B" = print("GOod"),
       print("No such grade"))

#Strings
stri = "This is a string"
nchar(stri) #length of string

"Dog" > "Dgg"
"Dog" > "Dog"

str2 = paste("owl","bear",sep=" ")
str2
 
substr(x=str2,start=4,stop=8)
sub(pattern = "owl",replacement = "hawk",x=str2) #only first match

gsub(pattern = "Egg" , replacement = "chicken",x="Egg egg")

strVect = strsplit("It will be split on the base of space"," " )
strVect

#Factors; used for limited values;
direction = c("up","left","down","right")
factorDir = factor(direction)
is.factor(factorDir)
factorDir #will contain only unique values;
#levels = store all possible values
levels(factorDir)

#data frames table containg any type of data in equal;

#customer datafram
custData = data.frame(name=c("Tom","sally"),age=c(22,23),stringsAsFactors = F)
custData

custData[1,1]
custData[1,1:2]
custData[1:3,2]

dim(custData)

#rbind - adds row, cbind - adds column
recordMark = data.frame(name="Mark",age=33)
recordMark
custData = rbind(custData,recordMark)
custData

age20 = custData[custData$age>20,]
age20


#loops;
num = 1
repeat{
  print(num)
  num = num+1
  if(num>3){
    break
  }
}

#continue is next here ;)  
num=5
while(num>0){
  print(num)
  num = num-1
}

nums = 1:5
for(i in nums){
  print(i)
}

#matrices;

matrix1 = matrix(data=c(1,2,3,4))
matrix1

matrix2 = matrix(data=c(1,2,3,4),nrow=2,ncol=2,byrow = T)
matrix2

dim(matrix2)
matrix2

#arrays
array1 = array(data=1:8,dim=c(2,2,2))
array1
