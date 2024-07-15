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

int main() {
    B obj;
    obj.show();
    obj.display();
    return 0;
}
