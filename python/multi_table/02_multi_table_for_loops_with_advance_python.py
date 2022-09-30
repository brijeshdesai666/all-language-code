

while(True):
    print('press "q" / "Q" to quite!!!!')
    num = input("Enter the number to choice multipication table\n")
    if (num == 'q' or num == "Q"):
        break
    
    try:
        num = int(num)
        sem = input("Enter the number, how to long multication table\n")
        
            
        sem = int(sem)
            
        l1 = []

        for i in range(1, sem + 1):
                l1.append(i)
        l1.reverse()

        for s in range(sem):
                print(f"{num} X {l1[s]} = {num*l1[s]}")
    except ValueError as e:
        print(e)
    
        print(f"\n\n****************plase Enter a number****************\n\n\n")
    except:
        raise KeyError("------this is not good !!!.......")
    else:
        print("========your multipiction table is successful gernated, WOW......")
print("-------------Thank for using this program.............")