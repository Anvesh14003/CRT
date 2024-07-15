class parent:
    def __init__(self):
        print("Cash gold properties")

    def bike(self):
        print("splender")

class Child(parent):
    def bike(self):
        print("HB")
obj = Child()
obj.bike()