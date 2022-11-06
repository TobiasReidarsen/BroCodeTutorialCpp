#include <iostream>
#include <vector>

namespace first {
    void Modulus() {
        auto intx = 40;

        for (int i = 1; i <= intx; ++i) {
            auto remainder = intx % i;
            std::cout << remainder << " divided by: " << i << std::endl;
        }
    }

    void ImplicitConversion() {
        double x = 3.14;
        std::cout << x << " no precision lost" << std::endl;
    }

}

namespace second {
    void Modulus() {
        auto intx = 30;

        for (int i = 1; i <= intx; ++i) {
            auto remainder = intx % i;
            std::cout << remainder << " divided by: " << i << std::endl;
        }
    }

    void ImplicitConversion() {
        int x = 3.14;
        std::cout << x << " lost precision " << std::endl;
    }

    void ExplicitConversion(){
        double x = (int) 3.14; // explicit conversion of a double into an int
        std::cout << x << " explicit conversion " << std::endl;
    }

    void AsciiCast(){
        char x = 100;
        std::cout << x << ": implicit" << std::endl; // Implicit will be cast as a ascii character 'd';
        std::cout << (char)101 << ": explicit conversion" << std::endl; // Implicit will be cast as a ascii character 'd';

    }

}

int main() {
    second::Modulus();
    first::Modulus();
    second::ImplicitConversion();
    first::ImplicitConversion();
    second::ExplicitConversion();
    second::AsciiCast();

    return 0;
}
