
#include <iostream>

int main()
{
    std::cout << "Vvedite chislo: ";
    int a = 0;
    std::cin >> a;
    int sum = 0;
    int sum2 = 0;
    int vtoroe = a % 1000;
    int pervoe = a / 1000;
    while (pervoe > 1) {
        sum += pervoe % 10;
        pervoe /= 10;
    }
    while (vtoroe > 1) {
        sum2 = vtoroe % 10;
        vtoroe /= 10;
    }
    if (sum == sum2) {
        std::cout << "Schastlivoe";
    }
    else {
        std::cout << "Ne schastlivie";
    }
}


