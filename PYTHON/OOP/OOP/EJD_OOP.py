class Sorcerer:

      def __init__(ID, name, age):  
         ID.__name = name
         ID.__age = age

      def name_printing(ID):
                print(f"Name: {ID.name}")
         
      def age_printing(ID):
                print(f"Age: {ID.age}")

#       name = "" 
#       age = 0

S1 = Sorcerer("Yuta", 17)

S1.name_printing()
S1.age_printing()