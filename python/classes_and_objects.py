
#Classes and objects

#when we want to define our own datatypes except 
#that those are provided in python and these are called classes.

class student:
    #everything in student class
    #we can define attritubes here and can use primitive data types
    def __init__(self,name,programme,gpa,is_on_suspension):
        #maps what attributes that student will have
        self.name = name      #attribute = name from here = self.name 
        self.programme = programme 
        self.gpa = gpa
        self.is_on_suspension = is_on_suspension

student1 = student("abc","cse",3.9,False)
#calls init function and values are passed as arguments
'''
*name of the student object will be the name that we will pass
*name of the student's programme object will be the programme value
 that we will pass.
'''
student2 = student("bcs","business",3.1,True)
print(student1.name)
print(student1.gpa)
print(student2.name , student2.gpa) #Attribute names are passed