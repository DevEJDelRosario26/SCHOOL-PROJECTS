class Animal: 
        def __init__(self,name):
               self.name = name
             #  name.move = move
        
        def speak(self):
                print(f"Name: {self.name}")

class Doggo(Animal):
 pass

d1 = Doggo("Rex")
d1.speak()