def greet(name):
    print(f"good morning, {name}") # this is f string


greet("brijesh")
print("\n")
print("good morning , {}  today's {} and today's date is {}".format("brijesh" , "sunday" , "14-aug-2022")) # this is formate method
print("\n")
print('''good morning , {1}  
  today's {2} 
      and 
  today's date is "{0}"'''.format("14-aug-2022" , "brijesh" , "sunday"))  #  this is formate method 
print("\n")
