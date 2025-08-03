#include <iostream>

// Rekürsif olarak sayıları toplayan fonksiyon
int rekursifToplam(int n) {
    // Sonlandırma koşulu: Eğer n 0 veya daha küçükse, toplam 0'dır.
    if (n <= 0) {
        return 0;
    }
    // Rekürsif kısım: n'yi ve n-1'in toplamını döndürür.
    return n + rekursifToplam(n - 1);
}

int main() {
    int sayi;

    std::cout << "Lütfen bir pozitif tam sayı girin: ";
    std::cin >> sayi;

    if (sayi < 0) {
        std::cout << "Lütfen pozitif bir sayı girin." << std::endl;
    } else {
        int toplam = rekursifToplam(sayi);
        std::cout << "1'den " << sayi << "'ye kadar olan sayıların toplamı: " << toplam << std::endl;
    }

    return 0;
}