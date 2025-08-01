#include <iostream>

int main() {
    double sayi1, sayi2;

    std::cout << "Lütfen ilk sayıyı girin: ";
    std::cin >> sayi1;

    std::cout << "Lütfen ikinci sayıyı girin: ";
    std::cin >> sayi2;

    std::cout << "İşlemlerin Sonuçları:\n";
    std::cout << "------------------------\n";
    
    // Toplama işlemi
    std::cout << "Toplam: " << sayi1 + sayi2 << '\n';

    // Çıkarma işlemi
    std::cout << "Fark: " << sayi1 - sayi2 << '\n';

    // Çarpma işlemi
    std::cout << "Çarpım: " << sayi1 * sayi2 << '\n';

    // Bölme işlemi
    // Niş bilgi: Ya kullanıcı bir sayıyı sıfıra bölmeye çalışırsa? Artık onu da siz kontrol edin :)
        std::cout << "Bölüm: " << sayi1 / sayi2 << '\n';

    return 0;
}