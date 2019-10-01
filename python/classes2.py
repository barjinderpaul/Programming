

#Another example of classes and objects

class student:
    def __init__(self,name,regNo,k1,k2,k3):
        self.name = name
        self.reg = regNo
        self.tech1 = k1
        self.tech2 = k2
        self.tech3 = k3

name = input("Enter name")
regNo = int(input("Enter reg no"))
k1 = input("Enter technology 1")
k2 = input("Enter technology 2")
k3 = input("Enter technology 3")
student1 = student(name,regNo,k1,k2,k3)
print(student1.name,student1.reg,student1.tech1,student1.tech2,student1.tech3)