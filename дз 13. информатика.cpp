#include <iostream>
#include <cmath>

int main() {
    int D;
    double x1, x2;
    
    D = 2 * 2 - 4 * 1 * (-120);
    
    if (D >= 0) {
        x1 = (-2 + sqrt(D)) / (2 * 1);
        x2 = (-2 - sqrt(D)) / (2 * 1);
        
        if (x1 > 0 && x1 == static_cast<int>(x1)) {
            std::cout << "студентів було" << static_cast<int>(x1)  << std::endl;
        }
        else if (x2 > 0 && x2 == static_cast<int>(x2)) {
            std::cout << "студентів було" << static_cast<int>(x2) << std::endl;
        }
        else {
            std::cout << "немає рішення" << std::endl;
        }
    }
    else {
        std::cout << "немає рішення" << std::endl;
    }
    
    return 0;
}