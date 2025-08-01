#include <iostream>
#include <string>

int main() {
    std::string ad, soyad;
    int yas;

    std::cout << "Lütfen adınızı girin: ";
    std::cin >> ad;

    std::cout << "Lütfen soyadınızı girin: ";
    std::cin >> soyad;

    std::cout << "Lütfen yaşınızı girin: ";
    std::cin >> yas;

    std::cout << "------------------------\n";
    std::cout << "Merhaba " << ad << " " << soyad << ", " << yas << " yaşındasınız." << '\n';

    return 0;
}