#include <iostream>

const double PI = 3.14;

// Dairenin alanını hesaplayan fonksiyon
double daireAlaniHesapla(double yaricap) {
    return PI * yaricap * yaricap;
}

// Dairenin çevresini hesaplayan fonksiyon
double daireCevresiHesapla(double yaricap) {
    return 2 * PI * yaricap;
}

int main() {
    double yaricap;

    std::cout << "Lütfen hesaplama yapmak istediğiniz dairenin yarıçapını girin: ";
    std::cin >> yaricap;

    double alan = daireAlaniHesapla(yaricap);
    double cevre = daireCevresiHesapla(yaricap);

    std::cout << "Dairenin Alanı: " << alan << std::endl;
    std::cout << "Dairenin Çevresi: " << cevre << std::endl;

    return 0;
}