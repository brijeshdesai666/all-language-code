from functools import reduce

l2 = []
x = int(input("Enter a number to give a fectorial: "))

for i in range(1,x):
    l2.append(i + 1)

sum = lambda a,b: a*b

print(reduce(sum,l2))