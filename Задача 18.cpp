
#include <iostream>

int main()
{
    std::cout << "Vvedite chilso: ";
    int s = 0;
    std::cin >> s;
    int a = s % 10;
    s /= 10;
    int b = s % 10;
    s /= 10;
    int c = s % 10;
    int d = s / 10;
    if (a == d && b == c) {
        std::cout << "Eto polindrom";
    }
    else {
        std::cout << "Eto ne polindrom";
    }
   

}
    

