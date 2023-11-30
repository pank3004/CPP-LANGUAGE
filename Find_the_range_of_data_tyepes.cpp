#include <iostream>
#include <limits>

int main() {
    std::cout << "Minimum value for int: " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "Maximum value for int: " << std::numeric_limits<int>::max() << std::endl;

    return 0;
}
