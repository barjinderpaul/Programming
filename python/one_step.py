#list of objects as well as list manipulation in python
class super_class:
    def __init__(self,name,n1,n2,n_list):
        self.name = name
        self.base = n1
        self.exp = n2
        self.n_list = n_list
    def return_list(self):
        return self.n_list
    def exponent(self):
        result = 1
        for i in range(self.exp):
            result = result * self.base
        return result
    

no_of_objects = int(input("Enter number of super_class objects"))
my_objects = []

for i in range(no_of_objects):
    try:
        name =  input("Enter name ")
        n1 = int(input("Enter first number "))
        n2 = int(input("enter second number "))
        print("Enter elements of the list ")
        n_list = list(map(int,input().split()))
        my_objects.append(super_class(name,n1,n2,n_list))

    except ValueError as err:
        print(err)
i = 1
for obj in my_objects:
    print("Details of student " ,i," ",obj.name," ",obj.base," ",obj.exp," ",obj.n_list," " )
    i+=1


