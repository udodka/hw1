

#include <iostream>

int main()
{
    std::cout << "Vvedite nomer mesyaja: ";
    int a = 0;
    std::cin >> a;

    if (a == 1) {
        std::cout << "Yanvar - Zima";
    }
    if (a == 2) {
        std::cout << "Fevral - Zima";
    }
    if (a == 3) {
        std::cout << "Mart - Vesna";
    }
    if (a == 4) {
        std::cout << "Aprel - Vesna";
    }
    if (a == 5) {
        std::cout << "May - Vesna";
    }
    if (a == 6) {
        std::cout << "Iun -  Leto";
    }
    if (a == 7) {
        std::cout << "Iyul - Leto";
    }
    if (a == 8) {
        std::cout << "Avgust - Leto";
    }
    if (a == 9) {
        std::cout << "Sentyabr - Ocen";
    }
    if (a == 10) {
        std::cout << "Oktyabr - Ocen";
    }
    if (a == 11) {
        std::cout << "Noyabr - Ocen";
    }
    if (a == 12) {
        std::cout << "Decabr - Zima";
    }
    if (a > 12) {
        std::cout << "Takogo  mesyaja net!";
    }
   
}

