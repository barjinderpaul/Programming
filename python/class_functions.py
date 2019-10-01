class student:
    def __init__(self,name,programme,gpa):
         self.name = name
         self.programme = programme
         self.gpa = gpa
    
    #Wheather a student is a great student
    def is_great(self):
        if(self.gpa>=3.0):
            return True
        else:
            return False

s1 = student("Abc","cse",3.1)
s2 = student("bcd","mec",3.2)

print(s1.is_great())