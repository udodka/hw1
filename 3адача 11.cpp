#include <iostream>


int main()
{

	int stoimost = 0;
	std::cout << "Vvedite stoimost: ";
	std::cin >> stoimost;

	if (stoimost > 1000) {
		stoimost = stoimost * 0.9;
		std::cout << "Stoimost ravna: " << stoimost << std::endl;
	}
	else {
		std::cout << "Stoimost ravna: " << stoimost << std::endl;
	}

    return 0;
}