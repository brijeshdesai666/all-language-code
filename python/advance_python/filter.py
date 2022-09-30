
def greater_than_5(number):
    if number > 5:
        return True
    else:
        return False




g5 = lambda num : num > 5
l1 = [1,8,9,2,3,4,56,6,7,2]
print(list(filter(g5,l1)))
print(list(filter(greater_than_5,l1)))