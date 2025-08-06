#include <iostream>

int main(){
    int diziBoyutu;
    std::cout<<"Kaç elemanlı dizi istersin?";
    std::cin>>diziBoyutu;
    
    // Girilen boyuttaki dinamik diziyi oluşturmak
    int* dizi = new int[diziBoyutu];

    // Dizi elemanlarını kullanıcıdan alıp diziye ekleme
    for(int i = 0; i<diziBoyutu;i++){
        std::cout<<i + 1<<". elemanı girin";
        std::cin>>dizi[i];
    }
    // Dizi elemanlarını ekrana yazdırma
    std::cout << "\nDizi elemanları: ";
    for (int i = 0; i < diziBoyutu; i++) {
        std::cout << dizi[i] << " ";
    }
    std::cout << std::endl;

    // Belleği serbest bırakma
    delete[] dizi;
}