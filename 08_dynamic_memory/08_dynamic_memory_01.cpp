#include <iostream>

int main() {
    int diziBoyutu;
    std::cout << "Kaç elemanlı dizi istersiniz? ";
    std::cin >> diziBoyutu;
    
    // Girilen boyuttaki dinamik diziyi oluşturmak
    int* dizi = new int[diziBoyutu];

    // Dizi elemanlarını kullanıcıdan alıp diziye ekleme
    for (int i = 0; i < diziBoyutu; i++) {
        std::cout << i + 1 << ". elemanı girin: ";
        std::cin >> dizi[i];
    }

    // Dizi elemanlarının toplamını hesaplama
    int sum = 0;
    std::cout << "\nDizi elemanları: ";
    for (int i = 0; i < diziBoyutu; i++) {
        std::cout << dizi[i] << " ";
        sum += dizi[i];
    }

    // Toplamı ekrana yazdırma
    std::cout << "\nToplam: " << sum << std::endl;

    // Belleği serbest bırakma
    delete[] dizi;

    return 0;
}