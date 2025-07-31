#include <iostream>

int main() {
    char secim = '+'; // Kullanıcının seçimi olarak bir karakter değişkeni tanımladık.
    // İstersen bu değeri '-', '*', veya '/' olarak değiştirebilirsin.
    
    // switch ifadesi, 'secim' değişkeninin değerine göre farklı durumları kontrol eder.
    switch (secim) {
        case '+':
            std::cout << "Toplama işlemi seçildi." << std::endl;
            break; // Bu işlemden sonra switch bloğundan çık.
        case '-':
            std::cout << "Çıkarma işlemi seçildi." << std::endl;
            break;
        case '*':
            std::cout << "Çarpma işlemi seçildi." << std::endl;
            break;
        case '/':
            std::cout << "Bölme işlemi seçildi." << std::endl;
            break;
        default: // Eğer yukarıdaki hiçbir durum eşleşmezse bu blok çalışır.
            std::cout << "Geçersiz işlem seçimi." << std::endl;
            break;
    }

    return 0;
}