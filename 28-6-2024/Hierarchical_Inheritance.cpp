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

int main() {
    B obj1;
    C obj2;
    
    obj1.show();
    obj1.display();
    
    obj2.show();
    obj2.print();
    
    return 0;
}
