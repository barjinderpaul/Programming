
#2-dimensional list

grid_list = [
    [1,2,3,4],
    ["a","b","c","d"],
    [4,3,2,1]
]
print(grid_list[0]) #first row
print(grid_list[0][0]) #first row first columns

#nested for loop:
print("prints column by column in every row")
for row in grid_list:
    for column in row:
        print(column,end=" ")
    print()

#OR Way:
print("Row in element form")
for row in grid_list:
    print(*row)   