#include <iostream>   // Giriş/çıkış işlemleri için
#include <map>        // map veri yapısını kullanmak için
#include <string>     // string veri tipini kullanmak için
#include <sstream>    // stringstream ile cümleyi kelimelere ayırmak için

int main() {
    // Kullanıcıdan bir cümle almak için değişken tanımlıyoruz
    std::string cumle;
    std::cout << "Bir cumle girin: ";
    std::getline(std::cin, cumle); 
    // std::getline, boşlukları da dahil ederek cümlenin tamamını okur

    // Her kelimenin kaç kez geçtiğini saklamak için map oluşturuyoruz
    // Anahtar (key): kelime, Değer (value): kelimenin sayısı
    std::map<std::string, int> kelimeSayilari;

    // Cümleyi kelimelere ayırmak için stringstream kullanıyoruz
    std::stringstream ss(cumle); 
    std::string kelime;

    // stringstream üzerinden kelimeleri teker teker alıyoruz
    while (ss >> kelime) {
        // Her kelimeyi map'te anahtar olarak kullanıyoruz
        // Kelime daha önce eklenmemişse varsayılan olarak 0 gelir, sonra 1 artırılır
        kelimeSayilari[kelime]++;
    }

    // Sonuçları ekrana yazdırıyoruz
    std::cout << "\nKelime sayilari:" << std::endl;
    for (const auto& pair : kelimeSayilari) {
        // pair.first => kelime, pair.second => kelimenin sayısı
        std::cout << "'" << pair.first << "': " << pair.second << " adet" << std::endl;
    }

    return 0;
}