#include <iostream>

#include "my_mul.hpp"

int main(int argc, char const *argv[])
{
    if (argc != 3) {
        std::cerr << "Provide exactly 2 arguments";
        
        return 1;
    }

    int a = std::atoi(argv[1]);
    int b = std::atoi(argv[2]);
    std::cout << my_mul(a, b) << '\n';

    return 0;
}
