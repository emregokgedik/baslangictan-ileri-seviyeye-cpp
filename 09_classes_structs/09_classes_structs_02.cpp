#include <iostream>
#include <cstring> // strcpy için

class Dosya {
private:
    char* mesaj; // Dinamik olarak ayrılacak bellek için işaretçi

public:
    // Yapıcı (Constructor)
    Dosya() {
        // 50 karakterlik bir alan ayır
        mesaj = new char[50];

        // Mesajı belleğe kopyala
        strcpy(mesaj, "Merhaba! Bu bir dinamik mesajdır.");

        std::cout << "Dosya nesnesi oluşturuldu. Mesaj: " << mesaj << std::endl;
    }

    // Yıkıcı (Destructor)
    ~Dosya() {
        delete[] mesaj; // Belleği serbest bırak
        std::cout << "Dosya nesnesi bellekten silindi." << std::endl;
    }
};

int main() {
    // Nesneyi dinamik olarak oluştur
    Dosya* d1 = new Dosya();

    // Yıkıcının çalışması için nesneyi sil
    delete d1;

    return 0;
}
