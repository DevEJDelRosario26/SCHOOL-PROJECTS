class calc:
   def __init__(Var,x,y):
       Var.x = x
       Var.y = y

   def addition(Var):
        print(f"\nAddition:\n {Var.x} + {Var.y} = {Var.x + Var.y}")
   def substraction(Var):
       print(f"\nsubstraction:\n {Var.x} - {Var.y} = {Var.x - Var.y}")
   def Multiplication(Var):
       print(f"\nMultiplication:\n {Var.x} * {Var.y} = {Var.x * Var.y}")
   def Division(Var):
       print(f"\nDivisioion:\n {Var.x} / {Var.y} = {Var.x / Var.y}")
       
Op1 = calc(6,7)
Op1.addition()
Op1.substraction()
Op1.Multiplication()
Op1.Division()