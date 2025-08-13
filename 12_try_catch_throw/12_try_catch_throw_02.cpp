#include <iostream>
#include <stdexcept>
#include <string>

// Kendi özel hata sınıfımızı oluşturuyoruz
class SifirBolmeHatasi : public std::runtime_error {
public:
    // Yapıcı fonksiyonu, temel sınıfın yapıcısını çağırır
    SifirBolmeHatasi(const std::string& mesaj) : std::runtime_error(mesaj) {}
};

class HesapMakinesi {
public:
    double bol(double a, double b) {
        if (b == 0.0) {
            // Kendi özel hata sınıfımızı fırlatıyoruz
            throw SifirBolmeHatasi("Hesap makinesi hatasi: Sifira bolme yapilamaz!");
        }
        return a / b;
    }
};

int main() {
    HesapMakinesi makine;

    try {
        double sonuc = makine.bol(10.0, 0.0);
        std::cout << "Sonuc: " << sonuc << std::endl;
    } catch (const SifirBolmeHatasi& e) {
        // Kendi hata sınıfımızı yakalıyoruz
        std::cerr << "Ozel hata yakalandi: " << e.what() << std::endl;
    } catch (const std::runtime_error& e) {
        // Diğer genel runtime hatalarını da yakalayabiliriz
        std::cerr << "Genel runtime hatasi: " << e.what() << std::endl;
    }

    return 0;
}