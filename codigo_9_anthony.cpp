#include <iostream>

int main() {
    for (int i = 1; i <= 10; ++i) {
        std::cout << "Tabla del " << i << ":\n";
        for (int j = 1; j <= 10; ++j) {
            std::cout << i << " x " << j << " = " << i * j << "\n";
        }
        std::cout << "\n";
    }
    return 0;
}

