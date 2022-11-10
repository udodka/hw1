

#include <iostream>

int main()
{
    int a, b, c = 0;
    std::cout << "Vvedite a" << std::endl;
    std::cin >> a;
    std::cout << "Vvedite b" << std::endl;
    std::cin >> b;
    std::cout << "Vvedite c" << std::endl;
    std::cin >> c;
    if (a == b or b == c or a == c) {
        std::cout << "Treygolnik ravnobedrenniy";
    }
    else {
        std::cout << "Treygolnik ne ravnobedrenniy";
    }
    return 0;

}


