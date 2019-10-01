class super:
    def make_super(self):
        print("I am super class")
    def make_def(self):
        print("I am super class function")

super_object = super()
super_object.make_super()

#Inheritance is used to use super class functions in base_class
class base_class(super):
    def make_base(self):
        print("I am a base class")
    def make_def_base(self):
        print("I am base class function")
    #function overridden from super class
    def make_def(self):
        print("I am function overloaded")
    
base_object = base_class()
base_object.make_super() #super class function
base_object.make_base() #base_class function
base_object.make_def() #overridden function