

#multi_thread2

#not working
from time import sleep
class hello:
    sleep(4)
    for i in range(4):
        sleep(4)
        print("hello")

class hi:
    for i in range(4):
        print("hi")
        sleep(1)

o1 = hello()
o2 = hi()