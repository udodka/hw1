
#include <iostream>

int main()
{
    std::cout << "Vvedite chislo: ";
    int a = 0;
    std::cin >> a;
    int v = a;
    std::cout << "Vvedite chislo b: ";
    int b = 0;
    std::cin >> b;
    int ymnoj = 1;
    int c = 0;
    while (a > 1) {
        c = a % 10;
        ymnoj *= c;
        a /= 10;
    }
    if (ymnoj > b) {
        std::cout << "Proizvedenie bolje chisla";
    }
    if (ymnoj < b) {
        std::cout << "Proizvedenie menwe chisla";
    }
    else {
        std::cout << "Proizvedenie = chisly";
    }



  

    
    
}


