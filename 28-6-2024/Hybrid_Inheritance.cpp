#include <iostream>

class A {
public:
    void show() {
        std::cout << "A class show function called" << std::endl;
    }
};

class B : public A {
public:
    void display() {
        std::cout << "B class display function called" << std::endl;
    }
};

class C : public A {
public:
    void print() {
        std::cout << "C class print function called" << std::endl;
    }
};

class D : public B, public C {
public:
    void output() {
        std::cout << "D class output function called" << std::endl;
    }
};

int main() {
    D obj;
    
    obj.B::show(); // Resolving ambiguity
    obj.display();
    obj.print();
    obj.output();
    
    return 0;
}
