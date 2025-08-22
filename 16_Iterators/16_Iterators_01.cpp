#include <iostream>
#include <vector>

int main() {
    std::vector<int> sayilar = {10, 20, 30, 40, 50};
    std::vector<int> yeniSayilar;

    // sayilar vektörünü baştan sona gezmek için tekrarlayıcı kullanıyoruz
    for (auto it = sayilar.begin(); it != sayilar.end(); ++it) {
        // Her elemanı yeniSayilar vektörüne ekliyoruz
        yeniSayilar.push_back(*it);
    }

    std::cout << "Kopyalanan elemanlar: ";
    for (int s : yeniSayilar) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    return 0;
}