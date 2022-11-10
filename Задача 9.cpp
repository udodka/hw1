
#include <iostream>

int main()
{
    std::cout << "Skolko prowlo sekynd: ";
    int sec = 0;
    std::cin >> sec;
    int k = sec / 60;
    int ch = k / 60;
    int min = k % 60;
    std::cout << "Proshlo " << ch << " chasov" << " i " << min << " minut" << std::endl;
    return 0;


}
