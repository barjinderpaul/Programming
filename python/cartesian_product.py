
#cartestian product :

from itertools import product
list1 = [ [1,2], [5,6] ]
print(list(product(*list1)))
final_list = list(product(*list1))
print(final_list)
