#include <iostream>
#include <string>

class Personel {
private:
    std::string ad;
    int sicilNo;
    double maas;

public:
    // Yapıcı (Constructor), nesne oluşurken çağrılır
    Personel(const std::string& ad, int sicilNo, double maas)
        : ad(ad), sicilNo(sicilNo), maas(maas) {}

    // Maaşı belirtilen yüzde oranında artırma
    void maasArtir(double yuzde) {
        maas += maas * (yuzde / 100.0);
    }

    // Bilgileri ekrana yazdırma
    void bilgileriGoster() const {
        std::cout << "Ad: " << ad << std::endl;
        std::cout << "Sicil No: " << sicilNo << std::endl;
        std::cout << "Maaş: " << maas << " TL" << std::endl;
    }
};

int main() {
    // Personel nesnesi oluşturma
    Personel p1("Emre Gökgedik", 12345, 15000.0);

    // Maaşını %20 artırma
    p1.maasArtir(20);

    // Bilgileri ekrana yazdırma
    p1.bilgileriGoster();

    return 0;
}
