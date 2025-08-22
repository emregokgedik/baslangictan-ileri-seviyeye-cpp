#include <iostream>
#include <list>

int main() {
    std::list<int> sayilar = {10, 20, 30, 40, 50};

    std::cout << "Listeyi tersten yazdırma: ";

    // rbegin() ve rend() ile ters tekrarlayıcıları kullanıyoruz
    for (auto it = sayilar.rbegin(); it != sayilar.rend(); ++it) {
        std::cout << *it << " "; // *it ifadesiyle eleman değerine erişim
    }
    std::cout << std::endl;

    return 0;
}