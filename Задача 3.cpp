 #include <iostream>

float square(int a, int b) {

    return (a * b) / 2;
}

float gipotenuza(int a, int b) {

    return  sqrt((a * a) + (b * b));
}

int main() {

    std::cout << "vvedite storony a: ";
    int a = 0;
    std::cin >> a;
    std::cout << "vvedite storony b: ";
    int b = 0;
    std::cin >> b;
    std::cout << "ploshad treygolnika = " << square(a, b) << std::endl;
    std::cout << "gipotenyza = " << gipotenuza(a,b) << std::endl;
    return 0;

}