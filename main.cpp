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

}

int main() {
    second::Modulus();
    first::Modulus();
    second::ImplicitConversion();
    first::ImplicitConversion();
    return 0;
}
