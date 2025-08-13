#include <iostream>
#include <stdexcept> // std::runtime_error için gerekli

// bolme fonksiyonu: iki double sayıyı alır ve sonucu döndürür
double bolme(double sayi1, double sayi2) {
    // Bölme işleminde sıfıra bölme hatasını kontrol ediyoruz
    if (sayi2 == 0) {
        // Eğer ikinci sayı sıfırsa, runtime_error fırlatıyoruz
        throw std::runtime_error("Hata: Sıfıra bölme işlemi yapılamaz!");
    }
    // Eğer sıfır değilse, bölme işlemini gerçekleştir ve sonucu döndür
    return sayi1 / sayi2;
}

int main() {
    double a, b;

    // Kullanıcıdan iki sayı alınır
    std::cout << "İki sayı giriniz (sayi1 sayi2): ";
    std::cin >> a >> b;

    // Try-catch bloğu ile hata yönetimi
    try {
        double sonuc = bolme(a, b); // bolme fonksiyonunu çağır
        std::cout << "Bölme sonucu: " << sonuc << std::endl;
    }
    catch (const std::runtime_error& e) {
        // Eğer bolme fonksiyonu hata fırlatırsa, burası çalışır
        std::cout << e.what() << std::endl; // Hata mesajını yazdır
    }

    return 0;
}
