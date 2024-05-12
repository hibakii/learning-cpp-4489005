// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){
    auto a = 8; // i for int
    auto b = 12345678901; // l for long
    auto c = 3.14f; // f for float
    auto d = 3.14; // d for double
    auto e = true; // b for boolean
    auto f = 'd'; // c for char
    auto g = "C++ rocks!"; // PKc for pointer to const char (fancy word for String)

    std::cout << "The type of a is " << typeid(a).name() << std:: endl;
    std::cout << "The type of a is " << typeid(b).name() << std:: endl;
    std::cout << "The type of a is " << typeid(c).name() << std:: endl;
    std::cout << "The type of a is " << typeid(d).name() << std:: endl;
    std::cout << "The type of a is " << typeid(e).name() << std:: endl;
    std::cout << "The type of a is " << typeid(f).name() << std:: endl;
    std::cout << "The type of a is " << typeid(g).name() << std:: endl;

    std::cout << std::endl << std::endl;
    return (0);
}
