#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // count için

int main() {
    std::vector<std::string> isimler = {"Ali", "Ayse", "Can", "Ali", "Fatma", "Ali"};
    std::string aranacakIsim;

    std::cout << "Aradiginiz ismi girin: ";
    std::cin >> aranacakIsim;

    // Vektörde belirtilen ismin sayısını bulur
    int sayac = std::count(isimler.begin(), isimler.end(), aranacakIsim);

    std::cout << "'" << aranacakIsim << "' ismi bu listede " << sayac << " kez geciyor." << std::endl;

    return 0;
}