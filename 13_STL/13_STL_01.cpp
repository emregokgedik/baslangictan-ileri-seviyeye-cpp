#include <iostream> // Giriş/çıkış işlemleri için gerekli kütüphane
#include <map>      // map veri yapısını kullanmak için gerekli kütüphane
#include <string>   // string veri tipini kullanmak için gerekli kütüphane

int main() {

    // Öğrencilerin isimlerini anahtar (key),
    // notlarını ise değer (value) olarak tutacak bir map oluşturuyoruz
    std::map<std::string, double> ogrenciNotlari;

    // Map'e (anahtar-değer) şeklinde veri ekliyoruz
    ogrenciNotlari["Emre"] = 84.75;
    ogrenciNotlari["Ahmet"] = 75.35;
    ogrenciNotlari["Olcay"] = 95.35;

    // Kullanıcıdan aramak istediği öğrencinin adını almak için değişken tanımlıyoruz
    std::string arananIsim;

    // Kullanıcıdan isim girmesini istiyoruz
    std::cout << "Notunu ogrenmek istediginiz kisinin ismini giriniz: ";
    std::cin >> arananIsim; // İsim kullanıcıdan alınır

    // Map içinde aranan ismi bulmak için find() fonksiyonunu kullanıyoruz
    // 'it' iterator, aranan elemanın konumunu tutar
    auto it = ogrenciNotlari.find(arananIsim);

    // Eğer aranan isim map'te bulunursa (end() değilse)
    if (it != ogrenciNotlari.end()) {
        // it->second, map'teki değeri (notu) ifade eder
        std::cout << arananIsim << " isimli ogrencinin notu: " << it->second << std::endl;
    } 
    // Eğer bulunamazsa
    else {
        std::cout << "Hata: " << arananIsim << " isimli ogrenci listede bulunamadi." << std::endl;
    }
}