#include <iostream>
#include <string>

// =============================================
//  Dizi Yazdırma Şablonu
//  Bu fonksiyon şablonu, verilen herhangi bir tipteki
//  diziyi ekrana yazdırır.
// =============================================

// Şablon tanımı: T, dizi elemanlarının veri tipi için bir yer tutucu
template <typename T>
void diziYazdir(const T dizi[], int boyut) {
    // Boyut kadar döngü ile dizi elemanlarını yazdır
    for (int i = 0; i < boyut; ++i) {
        std::cout << dizi[i] << " ";
    }
    std::cout << std::endl; // Satır sonu
}

int main() {
    // ------------------------------
    // 1) int tipinde bir dizi tanımla
    // ------------------------------
    int sayilar[] = {1, 2, 3, 4, 5};
    std::cout << "Int dizisi: ";
    diziYazdir(sayilar, 5); // int dizi ile şablon çağrısı

    // ---------------------------------
    // 2) std::string tipinde bir dizi tanımla
    // ---------------------------------
    std::string kelimeler[] = {"Merhaba", "C++", "Sablonlar"};
    std::cout << "String dizisi: ";
    diziYazdir(kelimeler, 3); // string dizi ile şablon çağrısı

    return 0; // Programı başarıyla sonlandır
}
