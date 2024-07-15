class A:
    def showA(self):
        print("Show A")
    
class B:
    def showB(self):
        print("Show B")

class C(A,B):
    def showC(self):
        print("Show C")

obj = C()

obj.showC()
