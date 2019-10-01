

from time import sleep
from threading import *
class hello(Thread):    #inherits Thread class
    def run(self):  #overrides the inbuilt run function
        for i in range(4):
            print("hello")
            sleep(0.5)  #halts the execution for 0.5s
    

class hi(Thread):   #inherits Thread class
    def run(self):  #overrides inbuilt run function
        for i in range(4):
            print("hi")
            sleep(0.5)  #halts the exectution for 0.5s
    
o1 = hello()    #object of hello class
o2 = hi()       #object of hi class

o1.start()  #calls inbuilt run function
sleep(0.2)  #ensures there is no collision b/w threads
o2.start()  #calls inbuilt run function