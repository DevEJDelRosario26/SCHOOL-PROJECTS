#Developed by: DevEJDelRosario 
#Acces Type: Open Source 

try:
 name = str(input("Enter Name: "))
 Y_n_S = str(input("Enter Year And Section: "))
 age = str(input("Enter Age: "))
 print("\n\n")

 file = open("Profile.txt","w")
  
 info = ["Name: " + name +"\nYear and Section: "+ Y_n_S +"\nAge: "+ age]
 file.writelines(info)
   

except FileNotFoundError:
 print("ERROR 404")

finally:
 print("Program Successfully Excuted")


loop = True
while loop == True:
 file = open("Profile.txt","r")
 read = file.read()
 
 req = int(input("\n\nOpen the Profile? \n Yes (1)\n No (0)\n"))

 if req == 1:
   
  print(read)
  loop == False

 elif req == 0:
   
  print(read)
  loop = False

 else:
  print("\nInvalid Input!\n\n")
  loop = True
