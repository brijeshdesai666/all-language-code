# # using for loops
num = int(input("Enter the number\n"))

a = 0
for i in range(1, num + 1):

    a = a + i

print(f"the 1 to {num} number of sum is {a}")
print("*****other way*****")
# # using while loops
num = int(input("Enter the number\n"))
i = 0
a = 0
while(i < num):
    i = i + 1
    a = a+i
print(f"the 1 to {num} number of sum is {a}")
