#include <iostream>

int main() {
    int gizliSayi = 42;
    int tahmin = 35; // Tahmin ettiğimiz sayı: Burayı değiştirerek test edin, en son 42'yi deneyin
    //ÖNEMLİ NOT: Her kod güncellemesinde yeniden compile işlemi yapmayı unutmayın, yoksa çalışmaz!

    std::cout << "Gizli sayı " << tahmin << " mı?" << std::endl;

    if (tahmin == gizliSayi) {
        std::cout << "Tebrikler, doğru tahmin!" << std::endl;
    } else if (tahmin > gizliSayi) {
        std::cout << "Maalesef, tahminin çok büyük. Daha küçük bir sayı dene." << std::endl;
    } else { // tahmin < gizliSayi
        std::cout << "Maalesef, tahminin çok küçük. Daha büyük bir sayı dene." << std::endl;
    }

    return 0;
}