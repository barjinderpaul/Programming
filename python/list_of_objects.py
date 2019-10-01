class MyClass(object):
    def __init__(self, name,number):
        self.name = name
        self.number = number

my_objects = []

for i in range(3):
    name=input()
    my_objects.append(MyClass(name,i))

# later
print(my_objects)
for obj in my_objects:
    print(obj.name,obj.number)