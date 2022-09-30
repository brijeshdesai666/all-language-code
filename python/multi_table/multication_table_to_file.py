

num = int(input(" 1 to __ , to give multication table :  "))

for i in range(1,num):
     with open(f"table of {i} .txt" , 'w') as f:
        for j in range(1,11):
         f.write((f"{i} X {j} = {i*j}"))
         if j != 10:
            f.write('\n')  
            
print('''****table garnate succesfulliy!! please cheak your this folder****''')
