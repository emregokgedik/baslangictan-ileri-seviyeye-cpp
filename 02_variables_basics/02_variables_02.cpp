#include <iostream>

int main(){
    double sayi1 = 13.05;
    double sayi2 = 5.05;
    double toplam = sayi1+sayi2;
    double fark = sayi1-sayi2;
    double carpim = sayi1*sayi2;
    double bolum = sayi1/sayi2;

    std::cout<<"Toplam"<<toplam<<std::endl;
    std::cout<<"Fark"<<fark<<std::endl;
    std::cout<<"Çarpım"<<carpim<<std::endl;
    std::cout<<"Bölüm"<<bolum<<std::endl;
}