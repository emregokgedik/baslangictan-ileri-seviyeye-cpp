#include <iostream>
using namespace std;

int main() {
    // 6 elemanlı double türünde bir dizi tanımla
    double sayilar[6] = {3.5, 7.2, 5.8, 9.1, 4.4, 6.7};

    double toplam = 0.0;
    int elemanSayisi = 6;

    // Dizideki elemanların toplamını hesapla
    for (int i = 0; i < elemanSayisi; i++) {
        toplam += sayilar[i];
    }

    // Ortalama = Toplam / Eleman sayısı ile ortalamayı bul, ortalama adlı değişkene ata
    double ortalama = toplam / elemanSayisi;

    // Sonucu ekrana yazdır
    cout << "Dizi elemanlarinin ortalamasi: " << ortalama << endl;

    return 0;
}
