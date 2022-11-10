
#include "pch.h"
#include <iostream>

float circumference(int r)
{
    return 2 * 3.14 * r;
}

float square(int r)
{
    return 3.14 * r * r;
}

int main() {

    std::cout << "vvedite znachenie radiusa: ";
    int r = 0;
    std::cin >> r;
    std::cout << "dlina okryjnosti = " << circumference(r) << std::endl;
    std::cout << "ploshad kryga = " << square(r) << std::endl;
    return 0;

}