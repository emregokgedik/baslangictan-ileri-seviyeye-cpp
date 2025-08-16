#include <iostream>
#include <vector>
#include <algorithm> // max_element ve min_element için

int main() {
    std::vector<int> sayilar = {45, 12, 78, 33, 91, 64};

    // Vektördeki en büyük elemana işaretçi döndürür
    auto enBuyukIt = std::max_element(sayilar.begin(), sayilar.end());

    // Vektördeki en küçük elemana işaretçi döndürür
    auto enKucukIt = std::min_element(sayilar.begin(), sayilar.end());

    // İşaretçiyi dereference ederek elemanın değerine erişiriz
    std::cout << "Vektordeki en buyuk eleman: " << *enBuyukIt << std::endl;
    std::cout << "Vektordeki en kucuk eleman: " << *enKucukIt << std::endl;

    return 0;
}