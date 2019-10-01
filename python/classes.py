
from math import factorial
class car:
    wheels = 12
    def __init__(self,mil):
        self.mil = mil

    @staticmethod
    def fact():
        n = int(input())
        print(factorial(n))

    @classmethod
    def getWheels(cls):
        return cls.wheels
    
c1 = car(4)
car.fact()
print(c1.mil)
print(c1.wheels)
print(c1.getWheels())
print(car.getWheels())