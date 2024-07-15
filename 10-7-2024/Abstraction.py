from abc import ABC, abstractmethod
class Test(ABC):
    @abstractmethod
    def m1(self):
        pass
    @abstractmethod
    def m2(self):
        pass

class MpPy(Test):
    def m1(self):
        print("M1")

    def m2(self):
        print("M2")

m = MpPy()
m.m1()
m.m2()
