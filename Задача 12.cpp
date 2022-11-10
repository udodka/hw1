

#include <iostream>

int main()
{
    std::cout << "Vvedire rost: ";
    int a = 0;
    std::cin >> a;
    std::cout << "Vvedire ves: ";
    int b = 0;
    std::cin >> b;
    int i = a - 100;
    if (b < i) {
        std::cout << "Nedostatochniy ves";
    }
    if(b == i) {
        std::cout << "Idealniy ves";
    }
    if (b > i) {
        std::cout << "isbitochniy ves";
    }
    return 0;
}


