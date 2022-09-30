l1 = [5,98,10,4565,25,65,68,89,45,35,50,3280,9852]

 
def number(num):
    if num % 5 == 0:
        return True
    else:
        return False

print(list(filter(number,l1)))
print(list(filter(lambda a : a%5==0,l1)))