#include <iostream>
#include <string>


enum class Gun{
    Pazartesi,
    Sali,
    Carsamba,
    Persembe,
    Cuma,
    Cumartesi,
    Pazar
};

std::string gunToString(Gun g) {
    switch (g) {
        case Gun::Pazartesi:  return "Pazartesi";
        case Gun::Sali:       return "Salı";
        case Gun::Carsamba:   return "Çarşamba";
        case Gun::Persembe:   return "Perşembe";
        case Gun::Cuma:       return "Cuma";
        case Gun::Cumartesi:  return "Cumartesi";
        case Gun::Pazar:      return "Pazar";
        default:              return "Bilinmeyen Gün";
    }
}

int main(){
    Gun bugun = Gun::Carsamba;
    std::cout<<"Bugün günlerden"<<gunToString(bugun)<<std::endl;
    if(bugun==Gun::Pazar){
        std::cout<<"Bugün tatil!"<<std::endl;
    }else{
        std::cout<<"Bugün iş günü :("<<std::endl;
    }
}