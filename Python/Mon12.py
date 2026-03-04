class Student:
    def __init__ (self,std_id,name):
        self.std_id= std_id
        self.name= name

    def pnt(self):
        print(self.std_id)
        print(self.name)

    def inline(self):
        print(f"Your name is '{self.name}' and your id is '{self.std_id}'")

         

class Number:
    def __init__(self,arr):
        self.arr = arr

    def larg(self,arr):
        print(max(arr))

