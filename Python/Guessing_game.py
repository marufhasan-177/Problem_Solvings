import random
i=0
ran= random.randint(0,9)
while i<3:
    chose = int(input("Guss: "))
    if chose== ran:
        print("You are right!")
        break
    i +=1
    if i==3:
        print("You failed..!!\n The number is - ", ran)