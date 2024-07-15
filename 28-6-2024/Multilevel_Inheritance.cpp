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

class C : public B {
public:
    void print() {
        std::cout << "C class print function called" << std::endl;
    }
};

int main() {
    C obj;
    obj.show();
    obj.display();
    obj.print();
    return 0;
}
