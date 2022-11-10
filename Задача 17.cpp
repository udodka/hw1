
#include <iostream>

int main()
{
    std::cout << "Vvedite chislo: ";
    int a = 0;
    std::cin >> a;
    if (a % 10 == 1) {
        std::cout << a << " Kopeika";
    }
    if (a % 10 == 2 or a % 10 == 3 or a % 10 == 4) {
        std::cout << a << " Kopeiki";
    }
    else {
        std::cout << a << " Kopeek";
    }

}

