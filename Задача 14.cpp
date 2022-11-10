

#include <iostream>

int main()
{
    std::cout << "Vvedite den nedeli: ";
    int a = 0;
    std::cin >> a;
    std::cout << "Vvedite dlitelnost peregovorov: ";
    int b = 0;
    std::cin >> b;
    if (a == 1 or a == 2 or a == 3 or a == 4 or a == 5) {
        int s = b * 100;
        std::cout << "Stoimost peregovorov = " << s;
    }
    else {
        int s = b * 80;
        std::cout << "Stoimost peregovorov = " << s;
    }
    

}


