
#exponentiation function with for loop:

#print(2**3)

def raise_to_power(base,power):
    res = 1
    for i in range(power):
        res = res*base
    return res

print(raise_to_power(2,2))