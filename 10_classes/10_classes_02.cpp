#include <iostream>

class Calisan{
    public:
    virtual double maasHesapla() = 0; // Sanal fonksiyon
};

class Yazilimci : public Calisan{
    public:
    double maasHesapla() override{
        return 10000;
    }
};

class Yonetici : public Calisan{
    public:
    double maasHesapla() override{
        return 20000;
    }
};

int main(){
    Calisan* calisanPtr; //Calisan türünden işaretçi

    Yazilimci yazilimci1;
    calisanPtr = &yazilimci1; //yazilimci1 nesnesinin adresini ata
    std::cout<<"Yazilimci maasi: "<<calisanPtr->maasHesapla() <<std::endl;

    Yonetici yonetici1;
    calisanPtr = &yonetici1; //yonetici1 nesnesinin adresini ata
    std::cout<<"Yonetici maasi: "<<calisanPtr->maasHesapla() <<std::endl;

    return 0;
}