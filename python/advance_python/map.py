def squre(num):
    return num * num


l1 = [4,6,2,7,8,3]

l2 = []
for item in l1:
    l2.append(squre(item)) 
print(l2)


# this is map method
a = map(squre,l1)
print(list(a))

