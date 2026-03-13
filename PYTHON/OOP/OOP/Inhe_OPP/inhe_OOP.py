class NCF:
     def enroll(Student):
          print("Successfully Enrolled")
     
     def pay(Student):
          print("Successfully Paid")

class CCS(NCF):
     def course(student):
          print("BSIT")

S1 = CCS()
S1.enroll()
S1.pay()